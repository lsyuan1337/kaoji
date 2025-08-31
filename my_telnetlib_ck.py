from telnetlib import Telnet
# from time import sleep
from funcs import *
#from random import shuffle
import re

###
class TelnetClient():
    def __init__(self):
        self.tn = Telnet()
        
    def login_host(self,ip,UserName,PassWord,Port,need_enable=False,enablePassword=""):
        # try:
        #     if ':' in ip:
        #         self.tn.open(ip.split('-')[0],port=ip.split('-')[1])
        #     else:
        #         self.tn.open(ip,port=23)
        # except:
        #     timePrint("设备{}连接失败".format(ip))
        #     return False
        
        try:
            self.tn.open(ip.split('-')[0],port=Port)
        except:
            if Port == '23':
                timePrint("设备{}连接失败".format(ip))
            else:
                timePrint("设备{}-{}连接失败".format(ip,Port))
            return False
        
        if Port == '23':
            self.cmdWay = b'\n'
            if(UserName != ""):
                self.tn.write(UserName.encode()+self.cmdWay)
                rely = self.tn.expect([],timeout=1)[2].decode().strip()
                timePrint(rely)
                
            if((PassWord != "")):
                #self.tn.read_until(b'Password:',timeout=2)
                self.tn.write(PassWord.encode()+self.cmdWay)
                rely = self.tn.expect([],timeout=2)[2].decode().strip()
                timePrint(rely)

            self.tn.write(self.cmdWay)
            sleep(1)
            self.tn.write(self.cmdWay)
            rely = self.tn.expect([],timeout=1)[2].decode().strip()
        # rely = self.showReadUntil('\n',mxto=1)
        else:
            self.cmdWay = b'\n\r'
            self.tn.write(self.cmdWay * 3)
            self.tn.write(b'en' + self.cmdWay)
            rely = self.tn.expect([],timeout=1)[2].decode().strip()

        if('#' in rely):
            #timePrint('设备%s登录成功!' %ip)
            return True
        else:
            timePrint('Error:设备%s未验证成功，请先停止拷机，修改正确的用户名密码后再重新开始拷机！' %ip)
            return False
 
    def do_cmd(self,cmds,wt=0.2):
        self.tn.write(cmds.encode().strip()+self.cmdWay)
        sleep(wt)
        rely = self.tn.read_very_eager().decode()
        timePrint(rely,end='')
        return rely.lstrip(cmds)
    
    def showReadUntilNoPrint(self,showcmd,readuntil='#',wt=0,mxto=1200):
        self.tn.write(showcmd.encode().strip()+self.cmdWay)
        rely = self.tn.read_very_eager().decode()
        isread = self.tn.read_until(readuntil.encode().strip(),timeout=mxto)
        #writeStrTxt(str(isread))
        return rely.lstrip(showcmd) + isread.decode()

    def do_cmd_noprint(self,cmds,wt=0.1):
        self.tn.write(cmds.encode().strip()+self.cmdWay)
        sleep(wt)
        rely = self.tn.read_very_eager().decode()
        #print(rely,end='')
        return rely.lstrip(cmds)
    
    def do_txt(self,wt=0.05):
        cmdList = getTxtList()
        for cmd in cmdList:
            self.do_cmd(cmd)
            sleep(wt)

    def untilRead(self,expectstr='',mxto=600):
        isread = self.tn.read_until(expectstr.encode().strip(),timeout=mxto)
        timePrint(isread.decode())
        return isread.decode()

    def do_blank(self,num=1,wt=0.1):
        for i in range(num):
            self.tn.write(''.encode().strip()+self.cmdWay)
            sleep(wt)
            rely = self.tn.read_very_eager().decode()
            #print(rely,end='')
        return rely

    def getHostname(self):
        self.toMaster()
        regx = '\S+#'
        showtxt = self.do_cmd_noprint('')
        try:
            hostname = findall(regx,showtxt)[0]
            return hostname
        except:
            return "Ruijie#"
        
    def getIntfUsage(self,port):
        reg = r'\d+\.\d+\%'
        showtxt = self.showReadUntil(f'show int {port} usage',mxto=2)
        usageList = findall(reg,showtxt)
        if len(usageList) == 3:
            return {"avg": float(usageList[0].strip("%")) ,'input' : float(usageList[1].strip("%")) , 'output' : float(usageList[2].strip("%")) }
        else:
            return {}
    
    def ucmpCheck(self,portList : list,mode='output'):
        portUsageInfo = {}
        for port in portList:
            portUsageDict = self.getIntfUsage(port)
            if portUsageDict:
                portUsageInfo[port] = portUsageDict.get(mode)
            else:
                print(f"未获取到接口{port}的速率信息，该接口不加入ucmp均衡判断！")

        return ucmpJudge(portUsageInfo,mode)
  
    def logout_host(self):
        self.tn.close()
        timePrint("设备登出")
        #logging.warning('%s登出' %ip)
        
    def waitForBackup(self,timeinterval=8):
        timePrint('等待备管理板就绪。。')
        while True:
            #infoDict = self.
            # ter()
            if 'none' in self.getMaster().values():
                sleep(timeinterval)
            else:
                timePrint('备管理板已就绪。。。')
                return
  
    def writeCmdList(self,cmdlist):
        for cmd in cmdlist:
            self.do_cmd(cmd.encode()+self.cmdWay)
    
    def writeTxt(self,fn):
        with open(fn,'r+') as f:
            cmdls = f.read().split('\n')
        self.tn.write('end'.encode()+self.cmdWay)
        self.tn.write('conf t'.encode()+self.cmdWay)
        for cmds in cmdls:
            self.tn.write(cmds.encode()+self.cmdWay)

    def doConfigTxt(self,txtFn):
        configList = readTxtList(txtFn)
        for cmd in configList:
            self.showReadUntil(cmd,mxto=5)

    def tryToReconnet(self,dutInfo,maxRetryTimes=10,retryInterval=20):
        tel = TelnetClient()
        for i in range(maxRetryTimes):
            if tel.login_host(dutInfo["ip"],dutInfo["UserName"],dutInfo["PassWord"]):
                return tel
            else:
                sleep(retryInterval)
        return False

    def showReadUntil(self,showcmd,readuntil='#',wt=0.05,mxto=1200):
        '''
        使用之前 下发ter length 0
        '''
        showtxt1 = self.do_cmd(showcmd,wt) #下发命令
        showtxt2 = self.untilRead(readuntil,mxto=mxto) #解决回显不完全的问题，默认读到""#"时停止
        return showtxt1 + showtxt2 #返回完整的回显内容

    def flapIntf(self,intf,wt=60):
        #self.toConfig()
        isIntf = self.do_cmd('interface {}'.format(intf))
        if 'config-if-' not in isIntf:
            return False
        else:
            self.showReadUntil('shutdown',mxto=2)
            sleep(wt)
            self.showReadUntil('no shutdown',mxto=2)
            #self.do_cmd('exit')
        
    def reduReady(self):
        self.toMaster()
        #self.do_cmd('en')
        while True:
            #enfl = self.do_cmd('show redundancy states ',wt=2)
            enfl = self.showReadUntil('show redundancy states')
            # if 'Redundancy state: realtime' in enfl and 'Data backup state: Backup completed' in enfl:
            if 'Redundancy switching function: enabled' in enfl:
                break
            else:
                sleep(20)
    
    def rdndDisableReady(self):
        self.toMaster()
        while True:
            enfl = self.showReadUntil('show redundancy states')
            if 'No slave' in enfl:
                #print('环境无双管！')
                return False
            elif 'Backup completed' in enfl:
                return True
            else:
                sleep(20)

    def do_Redu(self):
        self.toMaster()
        while True:
            self.do_cmd('redundancy forceswitch ')
            flagtxt = self.do_cmd('y',wt=3)
            if 'failed' in flagtxt:
                sleep(17)
            else:
                break
        self.logout_host()      

    def do_Reload(self):
        self.toMaster()
        while True:
            flagtxt = self.do_cmd('reload',wt=3)
            if '(Y/N)' in flagtxt:
                self.do_cmd("yes")
                break
            else:
                sleep(20)
        self.logout_host()   
    
    def getMaster(self):
        showtxt =  self.showReadUntilNoPrint("show ver slot | in 1   M").splitlines()
        masterDict = {}
        try: 
            for i in showtxt:
                if 'M1' in i or "M2" in i:
                    masterDict[i.split()[1]] = i.split()[-1]
            return masterDict
        except:
            return {'M1': 'master', 'M2': 'backup'}

    def getAllSlotStatus(self):
        slotStatusDict = {}
        self.toMaster()
        self.do_cmd_noprint("ter length 0")
        #while not isDictValueAllNone(slotStatusDict):
        while True:
            s = self.showReadUntil("show ver slot",wt=0.01,mxto=5)
            ls = findall('1\s+\S+\s+\d+.+',s)
            if ls:
                break
            else:
                sleep(2)
        
        for i in ls:
            slotNum = i.split()[1]
            slotStatus = i.split()[-1]
            if slotStatus == 'off':
                slotStatusDict[slotNum] = 'power off'
            elif slotStatus == 'startup':
                slotStatusDict[slotNum] = 'cannot startup'
            else:
                slotStatusDict[slotNum] = slotStatus

        return slotStatusDict
    
    def getPortStatus(self):
        portStatusDict = {}
        self.toMaster()
        self.do_cmd_noprint("ter length 0")
        while True:
            s = self.showReadUntil("show int sta | ex Status",wt=0.05,mxto= 5)
            ls = findall('.+up|.+down',s)
            if ls:
                break
            else:
                sleep(2)
        
        for i in ls:
            portStatusDict[' '.join(i.split()[0:-1])] = i.split()[-1]
            
            #ls = findall(r'.+(up|down)',s)
        return portStatusDict
    
    def getInternalPortStatus(self):
        portStatusDict = {}
        self.toMaster()
        self.do_cmd_noprint("ter length 0")
        # ls = []
        while True:
            s = self.showReadUntil("show internal-interface status",wt=0.05)
            ls = findall('\S+/\d+\s+\S+\s+\S+',s)
            if ls:
                break
            else:
                sleep(2)
        
        for i in ls:
            portStatusDict[i.split()[0]] = i.split()[-1]

        return portStatusDict
    
    def toMaster(self):
        showtxt = self.do_blank(1,wt=0.5)
        if '-STANDBY#' in showtxt:
            self.showReadUntil('exit')
        #self.do_cmd_noprint("en")
        sleep(0.5)
        self.do_blank()

    def toBackup(self):
        masterInfo = self.getMaster()
        if 'none' in masterInfo.values():
            return False
        for m in masterInfo:
            if masterInfo[m] == 'backup':
                self.do_cmd('session slot {}'.format(m))
                sleep(2)   
        self.do_cmd('enable')
        showtxt = self.do_blank(1,wt=0.5)
        if '-STANDBY#' in showtxt:
            sleep(2)
            return True
        
        # self.showReadUntil("","-STANDBY#")

    def toConfig(self):
        showtxt = self.do_blank(1,wt=0.5)
        if '(config' in showtxt:
            return True
        while True:
            self.do_cmd_noprint("en")
            showtxt = self.showReadUntil('config',mxto=2)
            if "(config" in showtxt:
                return True
            else:
                sleep(20)
        
    def toShell(self,tryTimes=3):
        '''
        不支持退出shell，直接退出Telnet登录 self.logout()
        '''
        self.toMaster()
        for i in range(tryTimes):
            txt = self.do_cmd('run-system-shell',wt=0.5)
            if '~ #' in txt:
                return True
            else:
                sleep(3)
    
    def exitShell(self):
        showtxt = self.do_blank()
        if '~ #' not in showtxt and "#" in showtxt:
            return True
        elif '~ #' in showtxt:
            showtxt = self.do_cmd('exit',wt=2)
            return '~ #' not in showtxt and "#" in showtxt
        
        
    def bgpDebugOn(self):
        self.toMaster()
        self.do_cmd("debug ip bgp record 1 100000")
        self.do_cmd('debug syslog limit time 0 numbers 0')
        self.do_cmd('y')

    def bgpDebugOff(self):
        self.toMaster()
        self.do_cmd('undebug ip bgp record')
        self.do_cmd("no debug syslog limit ")

    def dutCollect(self):
        rep = compile('(\S)+:tech_(\S)+.tar')
        #self.toMaster()
        self.do_cmd("enable")
        self.do_cmd('debug support',wt=0.5)
        isc = self.do_cmd('tech-support package',wt=0.5)
        if 'is running' in isc:
            #print('false')
            return False
        #self.do_cmd()
        logtxt = self.showReadUntil('y','#')
        # with open(r'C:\Users\Stanford\Desktop\test.txt','w+') as f:
        #     f.write(logtxt)
        if 'Tech-support package success' in logtxt:
            return rep.search(logtxt).group()
        else:
            return False
    
    def sendFileFtp(self,fn,pcftp):
        self.do_cmd('en',wt=0.1)
        txtlog = self.showReadUntil('copy {} oob_{}/{} via mgmt 0'.format(fn,pcftp,fn.split(':')[1]),wt=0.1,mxto=30)
        if "Copy success" in txtlog:
            return True

    #主备业务表项检查
    #show 表项字段处理：

    def nsrOspfCheck(self):
        regx = "\d+/\d+\s+\d+\s+\d+\s+\d+\s+\d+\s+\d+\s+\d+\s+\d+\s+\d+"
        self.toMaster()
        sleep(1)
        ospfInfoM = findall(regx,self.showReadUntil('show ip ospf neighbor statistics'))
        sleep(1)
        ospfv3InfoM = findall(regx,self.showReadUntil('show ipv6 ospf neighbor statistics'))
        if self.toBackup():
            sleep(1)
            ospfInfoB = findall(regx,self.showReadUntil('show ip ospf neighbor statistics'))
            sleep(1)
            ospfv3InfoB = findall(regx,self.showReadUntil('show ipv6 ospf neighbor statistics'))
            if (ospfInfoM == ospfInfoB) and (ospfv3InfoM == ospfv3InfoB) :
                return True
            else:
                timePrint("Error:OSPF主备板表项不一致!")
                return False
        else:
            timePrint("Error:环境无双管，无法进行主备一致性检查！")
            return True

    def nsrBgpCheck(self):
        self.toMaster()
        self.do_cmd_noprint("ter length 0")
        regx = r'neighbors\s\d+'
        regxLink = r'routes\s\d+'
        sleep(1)
        bgpInfoSumM = findall(regx,self.showReadUntil('show bgp all summary | in Total'))
        sleep(1)
        bgpInfoLinkM = findall(regxLink,self.showReadUntil('show bgp link-state link-state | in Total'))
        if self.toBackup():
            self.do_cmd_noprint("ter length 0")
            sleep(1)
            bgpInfoSumB = findall(regx,self.showReadUntil('show bgp all summary | in Total'))
            sleep(1)
            bgpInfoLinkB = findall(regxLink,self.showReadUntil('show bgp link-state link-state | in Total'))
            if (bgpInfoSumM == bgpInfoSumB) and (bgpInfoLinkM == bgpInfoLinkB):
                return True
            else:
                timePrint("Error:BGP主备板表项不一致!")
                return False
        else:
            timePrint("Error:环境无双管，无法进行主备一致性检查！")
            return True

    def nsrLdpCheck(self):
        self.toMaster()
        self.do_cmd_noprint
        regx = 'Count:\s+\d+'
        sleep(1)
        ldpInfoSumM = findall(regx,self.showReadUntil('show mpls ldp neighbor  | inc Addresses bound to peer LDP Ident'))
        if self.toBackup():
            self.do_cmd_noprint("ter length 0")
            sleep(1)
            ldpInfoSumB = findall(regx,self.showReadUntil('show mpls ldp neighbor  | inc Addresses bound to peer LDP Ident'))
            if sorted(ldpInfoSumM) == sorted(ldpInfoSumB):
                return True
            else:
                timePrint("Error:LDP主备板表项不一致!")
                return False
        else:
            timePrint("Error:环境无双管，无法进行主备一致性检查！")
            return True

    def nsrMcv4Check(self): #邻居数，表项
        regx1 = "grecs\s\d+"
        regx2 = '\d+\.\d+\.\d+\.\d+\s+\S+\s\S+\s+\S+/\S+\s+v\d\s+\d+\s/\s\S{0,10}'
        #regx2 = 
        self.toMaster()
        self.do_cmd_noprint("ter length 0")
        sleep(1)
        cp1_M = findall(regx1,self.showReadUntil('show ip igmp global | inc igi grec'))
        sleep(1)
        cp2_M = findall(regx2,self.showReadUntil('show ip pim sparse-mode neighbor'))
        if self.toBackup():
            self.do_cmd_noprint("ter length 0")
            sleep(1)
            cp1_B = findall(regx1,self.showReadUntil('show ip igmp global | inc igi grec'))
            sleep(1)
            cp2_B = findall(regx2,self.showReadUntil('show ip pim sparse-mode neighbor'))
            if (cp1_M == cp1_B) and (mcv4NsrListCheck(cp2_M) == mcv4NsrListCheck(cp2_B)):
                return True
            else:
                timePrint("Error:IPv4组播主备板表项不一致!")
                return False
        else:
            timePrint("Error:环境无双管，无法进行主备一致性检查！")
            return True

    def nsrMcv6Check(self):
        regx1 = r"grecs\s\d+"
        regx2 = r'\S+\s+\S+\s\S+\s+\S+/\S+\s+\d+\s/\S{0,10}'
        self.toMaster()
        self.do_cmd_noprint("ter length 0")
        sleep(1)
        cp1_M = findall(regx1,self.showReadUntil('show ipv6 mld global | inc mli num grecs ',))
        sleep(1)
        cp2_M = findall(regx2,self.showReadUntil('show ipv6 pim sparse-mode neighbor'))
        if self.toBackup():
            self.do_cmd_noprint("ter length 0")
            sleep(1)
            cp1_B = findall(regx1,self.showReadUntil('show ipv6 mld global | inc mli num grecs '))
            sleep(1)
            cp2_B = findall(regx2,self.showReadUntil('show ipv6 pim sparse-mode neighbor'))
            if (cp1_M == cp1_B) and (mcv6NsrListCheck(cp2_M) == mcv6NsrListCheck(cp2_B)):
                return True
            else:
                timePrint("Error:IPv6组播主备板表项不一致!")
                return False
        else:
            timePrint("Error:环境无双管，无法进行主备一致性检查！")
            return True

    def nsrIsisCheck(self):
        #regx = r'\b(?:(?:25[0-5]|2[0-4][0-9]|[01]?[0-9]?[0-9])\.){3}(?:25[0-5]|2[0-4][0-9]|[01]?[0-9]?[0-9])\b\s+[A-z][a-z]+'\
        regx1 = '\S+\s+L\S+\s+\S+\s+\S+\s+\S+\s+\S+\s\S+'
        regx2 = ':\s\d+'
        self.toMaster()
        self.do_cmd_noprint("ter length 0")
        sleep(1)
        cp1_M = isisNsrListCheck(findall(regx1,self.showReadUntil('show isis neighbor')))
        #self.do_blank()
        sleep(1)
        cp2_M = findall(regx2,self.showReadUntil('show isis route summary'))
        if self.toBackup():
            self.do_cmd_noprint("ter length 0")
            sleep(1)
            cp1_B = isisNsrListCheck(findall(regx1,self.showReadUntil('show isis neighbor')))
            #self.do_blank()
            sleep(1)
            cp2_B = findall(regx2,self.showReadUntil('show isis route summary'))
            if (cp1_M == cp1_B) and (cp2_M == cp2_B):
                return True
            else:
                timePrint("Error:ISIS主备板表项不一致!")
                return False
        else:
            timePrint("Error:环境无双管，无法进行主备一致性检查！")
            return True
        
    def nsrRouteCheck(self):
        regx = r"[A-za-z]+\s+\d+\s+\d+\s+\d+\s+\d+"
        self.toMaster()
        sleep(1)
        self.do_cmd_noprint("ter length 0")
        cp1_M = findall(regx,self.showReadUntil('show ip route  summary all | inc TOTAL | ex NO'))
        sleep(1)
        cp2_M = findall(regx,self.showReadUntil('show ipv6 route  summary all | inc TOTAL | ex NO'))
        if self.toBackup():
            self.do_cmd_noprint("ter length 0")
            sleep(1)
            cp1_B = findall(regx,self.showReadUntil('show ip route  summary all | inc TOTAL | ex NO'))
            sleep(1)
            cp2_B = findall(regx,self.showReadUntil('show ipv6 route  summary all | inc TOTAL | ex NO'))
            if (cp1_M == cp1_B) and (cp2_M == cp2_B):
                return True
            else:
                timePrint("Error:路由表主备板表项不一致!")
                return False
        else:
            timePrint("Error:环境无双管，无法进行主备一致性检查！")
            return True
      
    def nsrSrpCheck(self):
        #regx = r"([A-za-z]+\s+)+:\s\d+\s+\d+"
        regx = r'\d+\s+\d+'
        self.toMaster()
        sleep(1)
        cp1_M = findall(regx,self.showReadUntil('show srv6 policy statistics'))
        if self.toBackup():
            sleep(1)
            cp1_B = findall(regx,self.showReadUntil('show srv6 policy statistics'))
            if cp1_M == cp1_B:
                return True
            else:
                timePrint("Error:SRP主备板表项不一致!")
                return False
        else:
            timePrint("Error:环境无双管，无法进行主备一致性检查！")
            return True

    def nsrMplsCheck(self):
        regx = 'num:\s+\d+'
        self.toMaster()
        sleep(1)
        cp1_M = findall(regx,self.showReadUntil('show mpls statistics | ex fwd'))
        if self.toBackup():
            sleep(1)
            cp1_B = findall(regx,self.showReadUntil('show mpls statistics | ex fwd'))
            if cp1_M == cp1_B:
                return True
            else:
                timePrint("Error:Mpls主备板表项不一致!")
                return False
        else:
            timePrint("Error:环境无双管，无法进行主备一致性检查！")
            return True

    def getAvlSlot(self,mode='all'):
        slotDict = {}
        self.do_cmd_noprint("ter length 0")
        showtxt = self.do_cmd('show ver slot | ex none',wt=2)
        showLs = [i for i in showtxt.replace('\r','').split('\n') if "1   " in i]
        for slotInfo in showLs:
            slotDict[slotInfo.split()[1]] = slotInfo.split()[4]
        
        if mode == 'all':
            return slotDict
        elif mode == 'nosub':
            for slot in list(slotDict.keys()):
                if '/' in slot:
                    slotDict.pop(slot)
            return slotDict
        else:
            return False

    def getAvlSlotStatus(self,mode='all'):
        slotDict = {}
        self.do_cmd_noprint("ter length 0")
        showtxt = self.do_cmd('show ver slot | ex none',wt=2)
        showLs = [i for i in showtxt.replace('\r','').split('\n') if "1   " in i]
        for slotInfo in showLs:
            slotDict[slotInfo.split()[1]] = slotInfo.split()[-1]
        if mode == 'all':
            return slotDict
        elif mode == 'nosub':
            for slot in list(slotDict.keys()):
                if '/' in slot:
                    slotDict.pop(slot)
            return slotDict
        else:
            return False
    #mom信息收集
    def getSlotMomInfo(self,slot):
        if 'M' in slot.upper():
            showtxt = self.showReadUntil('show dataplane slot {} mom diagnosis pub-sub dataplane all'.format(slot))
        elif "FE" in slot.upper():
            showtxt = self.showReadUntil('show dataplane slot {} mom diagnosis pub-sub asic-driver'.format(slot))
        else:
            showtxt = self.showReadUntil('show dataplane slot {} mom diagnosis pub-sub asic-driver'.format(slot))

        return momTxtResolve(showtxt)


    def getMomInfoFlap(self,wlFnStr):
        wlFn = fileRouteCheck(wlFnStr)
        momInfoDict = {}
        slotDict = self.getAvlSlot(mode='nosub')
        for slot in slotDict.keys():
            momInfoDict[slot] = self.getSlotMomInfo(slot)
        momFlapInfo = momInfoCheck(momInfoDict,wlFn)
        if len(momFlapInfo):
            timePrint("Error:线卡Mom表项有异常变动")
            printMomDict(momFlapInfo)
            return False
        else:
            return True


    #路由协议变动
    def getOspfv2Flap(self,wlFnStr):
        wlFn = fileRouteCheck(wlFnStr)
        regx = "\S+/\d+"
        self.do_cmd_noprint('ter length 0')
        showtxt = self.showReadUntilNoPrint('show ip ospf hide route-record',wt=0)
        dutInfoLs = findall(regx,showtxt)
        flapList = whiteListCompare(dutInfoLs,wlFn)
        if  len(flapList) > 0:
            timePrint("Error:OSPF表项有异常震荡:")
            printList(flapList)
            return False
        else:
            return True

        
    def getOspfv3Flap(self,wlFnStr):
        wlFn = fileRouteCheck(wlFnStr)
        regx = "\S+/\d+"
        self.do_cmd_noprint('ter length 0')
        showtxt = self.showReadUntilNoPrint('show ipv6 ospf hide route-record',wt=0)
        dutInfoLs = findall(regx,showtxt)
        flapList = whiteListCompare(dutInfoLs,wlFn)
        if  len(flapList) > 0:
            timePrint("Error:OSPFv3表项有异常震荡:")
            printList(flapList)
            return False
        else:
            return True

    
    def getIsisv4Flap(self,wlFnStr):
        wlFn = fileRouteCheck(wlFnStr)
        regx = "\S+\s+/\d+"
        self.do_cmd_noprint('ter length 0')
        showtxt = self.showReadUntilNoPrint('sh hide-isis route record ipv4',wt=0)
        dutInfoLs = [''.join(i.split()) for i in findall(regx,showtxt)]
        #writeListTxt(dutInfoLs,r'C:\Users\Stanford\Desktop\Isisv4Flapls.txt')
        flapList = whiteListCompare(dutInfoLs,wlFn)
        if  len(flapList) > 0:
            timePrint("Error:ISISv4表项有异常震荡：")
            printList(flapList)
            return False
        else:
            return True


    def getIsisv6Flap(self,wlFnStr):
        wlFn = fileRouteCheck(wlFnStr)
        regx = "\S+\s+/\d+"
        self.do_cmd_noprint('ter length 0')
        showtxt = self.showReadUntilNoPrint('sh hide-isis route record ipv6')
        dutInfoLs = [''.join(i.split()) for i in findall(regx,showtxt)]
        flapList = whiteListCompare(dutInfoLs,wlFn)
        if  len(flapList) > 0:
            timePrint("Error:ISISv6表项有异常震荡：")
            printList(flapList)
            return False
        else:
            return True


    def getLdpFlap(self,wlFnStr):
        wlFn = fileRouteCheck(wlFnStr)
        regx = "\d+\.\d+\.\d+\.\d+/\d+"
        self.do_cmd_noprint('ter length 0')
        sleep(1)
        showtxt = self.showReadUntilNoPrint('show mpls ldp internal | ex VC_',wt=0.05)
        dutInfoLs = findall(regx,showtxt)
        flapList = whiteListCompare(dutInfoLs,wlFn)
        #writeStrTxt(showtxt,'559LdpFlap.txt')
        #writeListTxt(dutInfoLs,'559LdpFlapList.txt')
        if  len(flapList) > 0:
            timePrint("Error:LDP表项有异常震荡：")
            printList(flapList)
            return False
        else:
            return True


    def getMcv4Flap(self,wlFnStr):
        wlFn = fileRouteCheck(wlFnStr)
        regx = '\d+\.\d+\.\d+\.\d+\s+\d+\.\d+\.\d+\.\d+'
        self.do_cmd_noprint('ter length 0')
        showtxt = self.showReadUntilNoPrint('sh ip pim sparse-mode stat mrt | regexp include [0-9]+\.[0-9]+\.[0-9]+\.[0-9]',wt=0.05)
        dutInfoLs = [i.split()[0] for i in findall(regx,showtxt)]
        flapList = whiteListCompare(dutInfoLs,wlFn)
        if  len(flapList) > 0:
            timePrint("Error:MCv4表项有异常震荡：")
            printList(flapList)
            return False
        else:
            return True


    def getMcv6Flap(self,wlFnStr):
        wlFn = fileRouteCheck(wlFnStr)
        regx = '\S+\s+\S+\s+\SG'
        self.do_cmd_noprint('ter length 0')
        showtxt = self.showReadUntilNoPrint('sh ipv6 pim sparse-mode stat mrt | regexp include ff[0-9|a-f]{0,2}:',wt=0.05)
        dutInfoLs =[i.split()[0] for i in findall(regx,showtxt)]
        flapList = whiteListCompare(dutInfoLs,wlFn)
        if  len(flapList) > 0:
            timePrint("Error:MCv6表项有异常震荡：")
            printList(flapList)
            return False
        else:
            return True


    # BGP下发表项震荡 debug ip bgp record 1 100000,
    # debug syslog limit time 0 numbers 0r

    def getBgpRouteFlap(self,wlFnStr):
        '''
        show bgp develop record prefix
        IPv6和FTN表项更新记录，只要是基于路由前缀的表项都是在此记录下发给NSM，
        典型的包括：SRv6/MPLS/普通路由
        '''
        wlFn = fileRouteCheck(wlFnStr)
        regx = '\S+/\d+'
        self.do_cmd_noprint('ter length 0')
        showtxt = self.showReadUntilNoPrint('show bgp develop record prefix',wt=0.05)
        if "enable:false" in showtxt:
            timePrint('未开启debug，跳过检查。')
            return True
        dutInfoLs = list(set([i.split()[0] for i in findall(regx,showtxt)]))
        
        flapList = whiteListCompare(dutInfoLs,wlFn)
        if  len(flapList) > 0:
            timePrint("Error:BGP路由表项有异常震荡：{}".format(flapList))
            return False
        else:
            return True

    def getBgpSrpFlap(self,wlFnStr):
        '''
        暂不支持
        SRP表项更新记录，从BGP通告给SRP。
        show bgp develop record srp-route
        '''
        pass

    #故障注入
    def getSlotStat(self,slot):
        isOk = self.do_cmd("show ver slot {}".format(slot),wt=2)
        return 'ok' in isOk

    def getSlotLsStat(self,slotls):
        slotStat = {}
        for slot in slotls:
            #SendCmd("show ver slot {}".format(slot))
            slotStat[slot] = self.getSlotStat(slot)
        return slotStat

    #reset线卡
    def resetSlotAction(self,slotLs,israndom = False,period = 10, waitForUp = True):
        def resetSlot(s):
            while True:
                isReset = self.do_cmd("reset module {}".format(s),wt=2)
                if 'not inserted' in isReset:
                    timePrint(f'检测到slot {s}未插入，跳过...')
                    return False
                if '[N/y]' in isReset:
                    self.do_cmd('y')
                    return True
                else:
                    sleep(5)

        if not slotLs:
            return True

        #确保所有线卡是OK状态
        # while True:
        #     if sumDictValues(self.getSlotLsStat(slotLs)) < len(slotLs):
        #         #timePrint("Some slots are not ready.. Wait for 30s")
        #         sleep(20)
        #     else:
        #         break
        #reset
        if israndom:
            shuffle(slotLs)
        
        self.toMaster()
        
        for slot in slotLs:
            resetSlot(slot)
            sleep(period-2)

        #等待线卡全部up
        if waitForUp:
            if len(slotLs) <= 2:
                sleep(30 - len(slotLs) * 10)
            while True:
                if sumDictValues(self.getSlotLsStat(slotLs)) < len(slotLs):
                    sleep(28)
                else:
                    return True

    
    #power off/on 线卡
    def powerOffAction(self,slotLs,israndom=False,period=2):
        def powerOffSlot(s):
            # while True:
            #     isPowerOff = self.do_cmd("power off slot {}".format(s),wt=2)
            #     if 'not inserted' in isPowerOff:
            #         timePrint(f'检测到slot {s}未插入，跳过...')
            #         return False
            #     if '[N/y]' in isPowerOff:
            #         flag = self.showReadUntil('y',wt=2)
            #         # flag = self.do_cmd("power off slot {}".format(s),wt=1)
            #         if 'already' in flag:
            #             return True
            #         # if 'FE' in s.upper():
            #         #     flag = self.do_cmd('y',wt=2)
            #         if 'success' in flag:
            #             return True
            #     else:
            #         sleep(5)

            #     def powerOffSlot(s):

            while True:
                isPowerOff = self.do_cmd("power off slot {}".format(s),wt=2)
                if 'not inserted' in isPowerOff:
                    timePrint(f'检测到slot {s}未插入，跳过...')
                    return False
                #flag = self.do_cmd("power off slot {}".format(s),wt=1)
                if ('already' in isPowerOff)or('success' in isPowerOff):
                    return True
                if 'FE' in s.upper():
                    flag = self.do_cmd('y',wt=2)
                    if 'success' in flag:
                        return True
                sleep(5)
        
        if israndom:
            shuffle(slotLs)

        self.toMaster()

        for slot in slotLs:
            powerOffSlot(slot)
            sleep(period)
    
        # sleep(20)
        #打乱线卡启动顺序
        #random.shuffle(slotLs)
    

    def powerOnAction(self,slotLs,israndom=False,period=3,waitForUp = True):
        def powerOnSlot(s):
            while True:
                # flag = self.do_cmd("power on slot {}".format(s),wt=1)
                flag = self.showReadUntil("power on slot {}".format(s),mxto=5)
                if 'not inserted' in flag:
                    timePrint(f'检测到slot {s}未插入，跳过...')
                    return False
                if 'success' in flag or 'already' in flag:
                    return True
                else:
                    sleep(5)

        if israndom:
            shuffle(slotLs)

        self.toMaster()

        for slot in slotLs:
            powerOnSlot(slot)
            sleep(period)
        #子母卡
        #powerList.sort(key= lambda x : len(x))
        #power on母卡,若子卡的母卡不在power列表中，则power on该子卡         
          
        # for slot in slotLs:
        #     if r'/' not in slot: 
        #         powerOnSlot(slot)
        #         sleep(15)
        #     elif slot.split('/')[0] not in slotLs:
        #         powerOnSlot(slot)
        #         sleep(15)
        
        #等待线卡全部up
        if waitForUp:
            while True:
                if sumDictValues(self.getSlotLsStat(slotLs)) < len(slotLs):
                    sleep(20-2)
                else:
                    return True


    def configFlapAction(self,configTxt,israndom=False):
        #self.toConfig()
        #乱序
        if israndom:
            cmdList = readTxtCfgShuffle(configTxt)
            # printList(cmdList)
        else:
            #顺序 
            cmdList = readTxtList(configTxt)
        
        # printList(cmdList)
        
        for line in cmdList:
            if pyCmdStr in line:
                try:
                    pyCmd = line.strip().lstrip(pyCmdStr).strip()
                    eval(pyCmd)
                except:
                    pass
                    #timePrint(f'指令[{pyCmd}]执行失败，请检查！')
            else:
                #self.do_cmd(line,wt=0.05)
                self.showReadUntil(line,wt=0.05,mxto=2)
        

    def pkillAction(self,psName,israndom=False,period = 5):
        if israndom:
            cmdList = readPsListShuffle(psName)
        else:
            cmdList = psName.split('\n')

        # print(cmdList)
        self.toShell()

        for cmd in cmdList:
            # sleep(period)
            if pyCmdStr in cmd:
                try:
                    eval(cmd.strip().lstrip(pyCmdStr))
                except:
                    pass
            else:
                self.showReadUntil(f'pkill -9 {cmd}','~ #')
                sleep(period)
        
        self.exitShell()
    

    # def portFlapAction(self,cmdArg:str,israndom = False):
    #     cmdList = readPortPyCfgList(cmdArg,israndom)
    #     self.toConfig()
    #     # print(cmdList)
    #     for cmd in cmdList:
    #         if pyCmdStr in cmd:
    #             try:
    #                 eval(cmd.strip().lstrip(pyCmdStr))
    #             except:
    #                 pass
    #         else:
    #             self.flapIntf(cmd)


    #确认邻居是否有过断联

    def getNbrStatusOspf(self):
        self.toMaster()
        self.do_cmd_noprint("ter length 0")
        showtxt = self.showReadUntil("show ip ospf neighbor detail  | inc Neighbor")
        nbrRegx = 'Neighbor\s\d+.\d+.\d+.\d+,.*'
        timeRegx = '\d+:\d+:\d+'
        nbrInfoLs = [i.split()[1].strip(",") + '_' + i.split()[-1] for i in findall(nbrRegx,showtxt)]
        timeInfoLs = findall(timeRegx,showtxt)
        assert len(nbrInfoLs) == len(timeInfoLs)
        ospfNbrTList = []
        for n,t in zip(nbrInfoLs,timeInfoLs):
            ospfNbrTList.append((n,t))
        #writeListTxt(ospfNbrTList,'ospfNbrTList.txt')
        return ospfNbrTList

    def getNbrStatusOspfv3(self):
        nbrRegx = 'Neighbor\s\d+.\d+.\d+.\d+,.*'
        timeRegx = '\d+:\d+:\d+'
        self.toMaster()
        self.do_cmd_noprint("ter length 0")
        showtxt = self.showReadUntil("show ipv6 ospf neighbor detail  | inc Neighbor")
        nbrInfoLs = [i.split()[1].strip(",") + '_' + i.split()[-1] for i in findall(nbrRegx,showtxt)]
        timeInfoLs = findall(timeRegx,showtxt)
        assert len(nbrInfoLs) == len(timeInfoLs)
        ospfNbrTList = []
        for n,t in zip(nbrInfoLs,timeInfoLs):
            ospfNbrTList.append((n,t))
        #writeListTxt(ospfNbrTList,'ospfv3NbrTList.txt')
        return ospfNbrTList

    def getNbrStatusIsis(self):
        nbrRegx = '\S+\s+L\S+\s+\S{0,15}\s+\S+\s+\d+\s+\S+\s+\S+\s\S+'
        timeRegx = "Uptime:\s\S+"
        self.toMaster()
        self.do_cmd_noprint("ter length 0")
        showtxt = self.showReadUntil("show isis neighbors detail | ex Level",wt=0.1)
        nbrInfoLs = [i.split()[-2] + ' ' +  i.split()[-1] for i in findall(nbrRegx,showtxt)]
        timeInfoLs = [i.split()[-1] for i in findall(timeRegx,showtxt)]
        assert len(nbrInfoLs) == len(timeInfoLs)
        isisNbrTList = []
        for n,t in zip(nbrInfoLs,timeInfoLs):
            isisNbrTList.append((n,t))
        #writeListTxt(nbrInfoLs,'isisnbrls.txt')
        #writeListTxt(timeInfoLs,'isisnbrtimels.txt')
        return isisNbrTList
        

    def getNbrStatusBgp(self):
        nbrRegx = '\S+\s+4\s+\d+\s+\d+\s+\d+\s+\d+\s+\d+\s+\d+\s+\S+\s+\w+'
        self.toMaster()
        self.do_cmd_noprint("ter length 0")
        showtxt = self.showReadUntil("show bgp all summary")
        nbrInfoLs = [i.split()[0] for i in findall(nbrRegx,showtxt)]
        timeInfoLs = [i.split()[-2] for i in findall(nbrRegx,showtxt)]
        assert len(nbrInfoLs) == len(timeInfoLs)
        bgpNbrTList = []
        for n,t in zip(nbrInfoLs,timeInfoLs):
            bgpNbrTList.append((n,t))

        #writeListTxt(bgpNbrTList,'bgpInfoList.txt')
        return bgpNbrTList

    def getNbrStatusLdp(self):
        nbrRegx = 'TCP\sconnection:\s\d+.\d+.\d+.\d+.\d+\s-\s\d+.\d+.\d+.\d+.\d+'
        timeRegx = 'Up\stime:\s\S+'
        self.toMaster()
        self.do_cmd_noprint("ter length 0")
        showtxt1 = self.showReadUntil("show mpls ldp neighbor detail  | inc TCP")
        showtxt2 = self.showReadUntil('show mpls ldp neighbor detail  | inc Up time')
        nbrInfoLs = [i.split(':')[1].strip() for i in findall(nbrRegx,showtxt1)]
        timeInfoLs = [i.split()[-1] for i in findall(timeRegx,showtxt2)]
        assert len(nbrInfoLs) == len(timeInfoLs)
        ldpNbrTList = []
        for n,t in zip(nbrInfoLs,timeInfoLs):
            ldpNbrTList.append((n,t))

        # writeListTxt(ldpNbrTList,'bgpInfoList.txt')
        return ldpNbrTList

    def getCfgTxt(self):
        self.toMaster()
        self.do_cmd_noprint("ter length 0")
        hn = self.getHostname()
        timePrint('开始获取设备配置。。')
        showtxt = self.showReadUntilNoPrint("show run",hn)
        configtxt = showtxt.lstrip('show run').rstrip(hn)
        timePrint('配置获取完成！')
        return configtxt
    
    #coredump检查
    def coredumpCheck(self):
        regx = 'core-\S+'
        self.toMaster()
        self.do_cmd_noprint("ter length 0")
        showtxt = self.showReadUntil("show coredump files",mxto=10)
        coredumpList = findall(regx,showtxt)
        if coredumpList:
            print("Error:发现以下Coredump:")
            printList(coredumpList)
            return False
        else:
            return True
    

    #邻居状态检查
    # def nbrStatusCheck(self):
    #     pass

    #线卡状态检查
    def slotStatusCheck(self):
        self.toMaster()
        self.do_cmd_noprint("ter length 0")
        regx = '1\s+\S+\s+\d+\s+\S+\s+\S+\s{0,1}\S+\s+\S+\s{0,1}\S{0,10}'
        showtxt = self.showReadUntil('show version slot',wt = 0.3)
        slotList = findall(regx,showtxt)
        #print(slotList)
        return slotList

    #获取当前时间
    def showClock(self):
        self.toMaster()
        showtxt = self.showReadUntilNoPrint("show clock")
        #15:04:55 Beijing Fri, Dec 16, 202122
        regx = '(\d{2}:\d{2}:\d{2}) \S+ \S+, (\S+ \d+), \d{4}'
        mat = findall(regx,showtxt)
        if mat:
            t = mat[0]
            return t[1] + ' ' + t[0]
        else:
            return ''

    #查log
    def logCheck(self,showClockTime='',IncStr=''):
        if showClockTime:
            beginTime = showClockTime.split(',')[-2].strip() +' ' + showClockTime.split()[0]
        else:
            beginTime = ''
        self.toMaster()
        self.do_cmd_noprint('ter length 0')
        if IncStr and beginTime:
            logtxt = self.showReadUntilNoPrint('show logging | be {} | inc {}'.format(beginTime,IncStr))
        elif beginTime:
            logtxt = self.showReadUntilNoPrint('show logging | be {}'.format(beginTime))
        elif IncStr:
            logtxt = self.showReadUntilNoPrint('show logging | inc {}'.format(IncStr))
        else:
            logtxt = self.showReadUntilNoPrint('show logging')

        return logtxt
    
    def srpFlapLogCheck(self):
        pass

    
    def ospfNbrFlapCheck(self,startClockTime=''):
        logRegx = '.*%OSPF[V3]*-.*'
        logTxt = self.logCheck(showClockTime=startClockTime,IncStr='%OSPF | ex CMD')
        errorList = findall(logRegx,logTxt)
        if errorList:
            printList(errorList)
            return False
        else:
            return True


    def isisNbrFlapCheck(self,startClockTime=''):
        logRegx = '.*%ISIS[V3]*-.*'
        logTxt = self.logCheck(showClockTime=startClockTime,IncStr='%ISIS | ex CMD')
        errorList = findall(logRegx,logTxt)
        if errorList:
            printList(errorList)
            return False
        else:
            return True
    

    def ldpNbrFlapCheck(self,startClockTime=''):
        logRegx = ''
        logTxt = self.logCheck(showClockTime=startClockTime,IncStr='%LDP | ex CMD')
        errorList = findall(logRegx,logTxt)
        if errorList:
            printList(errorList)
            return False
        else:
            return True


    def bgpNbrFlapCheck(self,startClockTime=''):
        logRegx = '.*%BGP-\d+.*'
        logTxt = self.logCheck(showClockTime=startClockTime,IncStr='%BGP | ex CMD')
        errorList = findall(logRegx,logTxt)
        if errorList:
            printList(errorList)
            return False
        else:
            return True
    
    def userCmdLogOn(self):
        self.toMaster()
        self.toConfig()
        self.do_cmd("logging userinfo command-log")
        self.do_cmd('en')

    def getSlotCPUInfo(self):
        self.toMaster()
        self.showReadUntilNoPrint("ter length 0")
        CPUInfo = {}
        while isDictValueAllNone(CPUInfo):
        #while True:
            slotTxt = self.showReadUntilNoPrint('show cpu  | inc Slot')
            cpuTxt = self.showReadUntil('show cpu  | inc five seconds')
            slotList = findall("(Slot \S+):",slotTxt)
            cpuList = findall("(\d+\.\d+)%",cpuTxt)
            if slotList and cpuList:
                break
        for slot,num in zip(slotList,cpuList):
            CPUInfo[slot] = num

        return CPUInfo


    def getSlotMemoryInfo(self):
        self.toMaster()
        self.showReadUntilNoPrint("ter length 0")
        d = {}
        #while isDictValueAllNone(d):
        while True:
            slotTxt = self.showReadUntilNoPrint('show memory slot all-info  | inc Slot')
            numTxt = self.showReadUntil('show memory slot all-info  | inc used rate')
            # regx = '\d+\.\d+%'
            slotList = findall("(Slot \S+):",slotTxt)
            numList = findall("(\d+\.\d+)% used rate",numTxt)
            if slotList and numList:
                break

        for slot,num in zip(slotList,numList):
            d[slot] = num

        return d
    


    
    def getLsmIntf(self):
        d = {}
        self.toMaster()
        self.showReadUntilNoPrint("ter length 0")
        showtxt = self.showReadUntil("show lsm interface")
        ls = findall(r"\S+Ethernet\s\S+\s+\d+|AggregatePort\s\S+\s+\d+",showtxt)
        d = {i.split('  ')[0]:i.split()[-1] for i in ls}
        return d
    
    def showInfoCheck(self,showCmd,expectStr,isExist=True):
        self.toMaster()
        self.showReadUntilNoPrint("ter length 0")
        showtxt = self.showReadUntil(showCmd,mxto=20)
        return (expectStr in showtxt) == isExist
    
    
    def nsrCheck(self,nsrCheckList:list):
        errorMsg = []
        for i in nsrCheckList:
            I = i.upper()
            if I == "ISIS":
                result = self.nsrIsisCheck()
                continue

            if I == "ROUTE":
                result = self.nsrRouteCheck()
                continue

            if I == "BGP":
                result = self.nsrBgpCheck()
                continue

            if I == "MCV4":
                result = self.nsrMcv4Check()
                continue

            if I == "MCV6":
                result = self.nsrMcv6Check()
                continue

            if I == "LDP":
                result = self.nsrLdpCheck()
                continue

            if I == "SRP":
                result = self.nsrSrpCheck()
                continue

            if I == 'OSPF':
                result = self.nsrOspfCheck()
                continue

            if not result:
                errorMsg.append(i.upper())

        if not errorMsg:
            return True
        else:
            for e in errorMsg:
                print(f"【{e}】主备板表项不一致！")
            return False
    
    def exceptionCheck(self):
        self.toMaster()
        self.showReadUntilNoPrint("ter length 0")
        hostname = self.getHostname()
        slotTxt = self.showReadUntilNoPrint("show exception slot all | inc Slot",hostname)
        slotList = findall(r'Slot\s+[A-Z]{0,2}\d+',slotTxt)
        exceptTxt = self.showReadUntil('show exception slot all | re inc There|Count:')
        exceptList = findall(r"There.*exception|Count:\s+\d+",exceptTxt)
        
        d = {}
        for slot,exceptinfo in zip(slotList,exceptList):
            if 'any' in exceptinfo:
                d[slot] = None
            elif 'Count' in exceptinfo:
                d[slot] = exceptinfo.split()[-1]

        if isDictValueAllNone(d):
            return True
        else:
            ls = d.keys()
            for k in ls:
                if d.get(k):
                    print(f'{k}出现异常死机信息！')
            return False 
        
    def getClusterInfo(self):
        self.toMaster()
        self.showReadUntilNoPrint("ter length 0")
        clusterInfo = {}
        while True:
            showtxt = self.showReadUntil("show cluster-monitor status")
            ls = findall("1   (\S+) +(\S+) +(\S+)",showtxt)
            if  ls:
                break
            else:
                sleep(2)
        for t in ls:
            clusterInfo[t[0]] = t[1],t[2]

        return clusterInfo

    
    def selfHealingCheck(self):
        self.toMaster()
        self.showReadUntilNoPrint("ter length 0")
        showtxt = self.showReadUntil("show psh selfhealing ")
        #2023-06-28 16:53:32.721270
        errorList = findall("\d{4}-\d{2}-\d{2} \d{2}:\d{2}:\d{2}\.\d{6}.+",showtxt)
        if errorList:
            print('检测到异常自愈信息！')
            return False
        else:
            return True

    def getFanStatus(self):
        self.toMaster()
        self.showReadUntilNoPrint("ter length 0")
        txt = self.showReadUntil("show fan detail") 
        fanList = findall('Status:\s+(\S+)',txt) #风扇状态
        subFanList = findall('([1-8])\ +(\S+)\ +\S+\ +\S+',txt) #子风扇状态
        if not fanList or not subFanList: #获取失败则返回空字典
            return {}
        
        fanStatus = {}
        for i in range(len(fanList)):
            fanStatus['Fan ' + str(i+1)] = fanList[i]
        for i in range(len(subFanList)):
            fanStatus['Fan ' + str(int((i/8)+1)) + '-' + subFanList[i][0]] = subFanList[i][1]
            
        return fanStatus 

    def getPowerStatus(self):
        self.toMaster()
        self.showReadUntilNoPrint("ter length 0")
        powerStatusDict = {}
        txt = self.showReadUntil("show power")
        #ls = findall(r'(ok|no-present|off)',txt)
        ls = findall('(\d+) + \S+ *\S* +\S+ +(ok|no-present|off)',txt)
        # print(ls)
        for t in ls:
            powerStatusDict['Power ' + t[0]] = t[1]
        return powerStatusDict
    
    def getAllPortUsage(self):
        self.toMaster()
        self.showReadUntilNoPrint("ter length 0")
        txt = self.showReadUntil("show int u")
        ls = findall(r"(\S+ \S+) +\d+ +Mbit +(\d+\.\d+%)\s+(\d+\.\d+%)\s+(\d+\.\d+%) ",txt)
        powerUsageDict = {}
        for i in ls:
            powerUsageDict[getPortIndex(i[0])] = {
                    'name' : i[0],
                    "avg": float(i[1].strip("%")) ,
                    'input' : float(i[2].strip("%")) , 
                    'output' : float(i[3].strip("%"))
                    }
            
        return powerUsageDict
    
    def portListUsage(self,portList):
        d = {}
        for port in portList:
            portUsage = self.getIntfUsage(port)
            d[port] = portUsage
        return d

    def getEmmcInfo(self):
        self.toMaster()
        self.showReadUntilNoPrint("ter length 0")
        emmcInfo = {}
        while not emmcInfo:
            slotTxt = self.showReadUntilNoPrint('show storage lifetime  | inc Slot')
            emmcTxt = self.showReadUntil('show storage lifetime  | inc Percent')
            slotList = findall("(Slot \S+) :",slotTxt)
            emmcList = findall("(\d+)%",emmcTxt)
            if slotList and emmcList:
                for slot,num in zip(slotList,emmcList):
                    emmcInfo[slot] = num
            
        return emmcInfo

    
    def getManuInfo(self):
        self.toMaster()
        self.showReadUntilNoPrint("ter length 0")
        
        manuinfo = {}
        showtxt =  self.showReadUntil('show manuinfo ')
        devNameList = findall('Device name:\s+(\S+)',showtxt)
        snTxtList = findall('Device Serial Number: +(\S+)',showtxt)
        locList = findall('Location:\s+(\S+)',showtxt)

        for dev,sn,loc in zip(devNameList,snTxtList,locList):
            manuinfo[sn] = (dev,loc)  
        return manuinfo
    
    def getLldpNbr(self):
        self.toMaster()
        self.showReadUntilNoPrint("ter length 0")
        
        lldpInfo = {}
        showtxt =  self.showReadUntil('show lldp nei')
        findList = re.findall('(.+)B, R',showtxt)

        for line in findList:
            lineList = list(filter(lambda x : x != '',line.split('  ')))
            nbrName,locIntf,nbrIntf = lineList[0].strip() , lineList[1].strip() , lineList[2].strip() 
            lldpInfo[locIntf] = [nbrName,nbrIntf]

        return lldpInfo
        
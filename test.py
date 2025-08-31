# import xlrd
from funcs import *
from my_telnetlib_ck import *
from feiShuRobot import *
from requests_toolbelt import MultipartEncoder
from ipaddress import ip_address
from threading import Thread,Event
from ocrFunc import *
import time
import sys
# from OCRtest import *



def dutConnect(dutInfo,maxRetryTimes=20,retryInterval=10):
    tel = TelnetClient()
    for i in range(maxRetryTimes):
        if tel.login_host(dutInfo["ip"],dutInfo["UserName"],dutInfo["PassWord"],Port=23):
            return tel
        else:
            sleep(retryInterval)
    return False



def getStreamList(ls,mode='tx'):
    if mode == 'j':
        for i in ls:
            print(f"$judge('$rx_{i} = $tx_{i}')")
        return
    elif mode == 'd':
        dls1 = [f'$rx_{i}' for i in ls]
        dls2 = [f'$tx_{i}' for i in ls]
        dls = dls1 + dls2
        print('delete_var({})'.format(','.join(dls)))
        return
    for i in ls:
        print(f'${mode}_{i} = {mode}_pkt({i})' )


def readStrCov(fn):
    with open(fn,'r+',errors='ignore') as f: 
        txt = f.read()
    newtxt = txt.replace('\n',r'\\n')
    newtxt = newtxt.replace('(',r'\(')
    newtxt = newtxt.replace(')',r'\)')
    print(newtxt)


if __name__ == '__main__' :
    dutInfo1 = {'ip':'10.110.5.73','UserName':'lsy','PassWord':'Cmri@2023'}
    dutInfo2 = {'ip':'10.110.5.59','UserName':'lsy','PassWord':'Cmri@2023'}
    dutInfo3 = {'ip':'10.110.5.59','UserName':'zpd','PassWord':'Cmri@2023'}
    dutInfo4 = {'ip':'10.110.7.12','UserName':'','PassWord':''}
    dutInfo5 = {'ip':'10.110.1.121','UserName':'admin','PassWord':'Ruijie@123'}
    dutInfo6 = {'ip':'10.110.1.51','UserName':'admin','PassWord':'Ruijie@123'}
    dutInfo7 = {'ip':'10.110.5.23','UserName':'','PassWord':''}

    # time.sleep(70*60)
    d1 = dutConnect(dutInfo1)
    d2 = dutConnect(dutInfo2)



    #reset 
    while True:
        d1.resetSlotAction(['FE1'])
        d1.resetSlotAction(['FE2'])
        d1.resetSlotAction(['FE3'])

        time.sleep(120)
        #
        d1.reduReady()

        #show-drop
        d1.showReadUntil('show dataplane slot 6 npu 1 uai trace clear-trace-counter -l all -s 9 -c 1 -g 1',mxto=1)
        d1.showReadUntil('show dataplane slot 16 npu 1 uai trace clear-trace-counter -l all -s 9 -c 1 -g 1',mxto=1)
        
        #shell
        d1.toShell()
        d1.showReadUntil('rg_at',mxto=1)
        d1.showReadUntil('load pktd_ctrl_inb',mxto=1)
        d1.showReadUntil('ut set_hal_dbg 1 0 1 0 1000000',mxto=1)
        d1.exitShell()
        #快转
        # d1.toBackup()
        # d1.showReadUntil('debug syslog limit numbers 0 time 0',mxto=1)
        # d1.showReadUntil('y',mxto=1)
        # d1.showReadUntil('debug efmp packet filter etype 8809 counter 0',mxto=1)
        # d1.showReadUntil('packet capture file tmp:lacp.pcap packet-num 2147483647 buffer-size 200 timeout 60',mxto=1)
        # d1.showReadUntil('packet capture rule lacp filter etype 0x8809',mxto=1)
        # d1.showReadUntil('packet capture point lacp rule lacp location control-plane both',mxto=1)
        # d1.showReadUntil('packet capture start',mxto=1)
        # d1.toMaster()
        # d2.showReadUntil('clear detector packet-trace result',mxto=1)
        

        #主备切换
        d1.do_Redu()
        del d1
        time.sleep(30)
        d1 = dutConnect(dutInfo1)
        # for _ in range(2):
        #     time.sleep(120)
        #     flag1 = d1.showInfoCheck('show logg | inc LACP | ex comm','%',isExist=False)
        #     flag2 = d2.showInfoCheck('show logg | inc LACP | ex comm','%',isExist=False)
        #     if not (flag1 and flag2):
        #         break
        # d1.showReadUntil('packet capture stop',mxto=1)

        # if not (flag1 and flag2):
        #     #快转：
        #     d1.showReadUntil('ter length 0 ')
        #     d2.showReadUntil('ter length 0 ')
        #     d1.showReadUntil('show efmp diagnosis statistics',mxto=1)
            
        #     #show-drop
        #     d1.showReadUntil('show dataplane slot 6 npu 1 uai trace show-trace-counter -l all -s 9 -c 1 -g 1')
        #     d1.showReadUntil('show dataplane slot 16 npu 1 uai trace show-trace-counter -l all -s 9 -c 1 -g 1')
        #     d2.showReadUntil('show detector packet-trace result',mxto=1)

        #     d1.showReadUntil('config')
        #     d1.showReadUntil('int range agg 1 - 3')
        #     d1.showReadUntil('shutdown')
        #     d2.showReadUntil('config')
        #     d2.showReadUntil('int range agg 1 - 3')
        #     d2.showReadUntil('shutdown')

        d1.toShell()
        for _ in range(2):
            time.sleep(120)

        d1.exitShell()
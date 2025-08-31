from re import findall,sub,split,compile
from time import sleep,strftime,time
from os import path,mkdir,getcwd,popen,system,rmdir
from inspect import isclass
import ctypes
from datetime import datetime
from PIL import ImageGrab  
from ocrFunc import *
from feiShuRobot import *
from PyQt5.QtWidgets import *
from random import shuffle,randint
from getAreaTuple import *
import xlwt,xlrd
from xlutils.copy import copy
from txtInfo import *

pyCmdStr = '#-py'
pyCmdSplitReg = '#-py\s*\S*'
reportFn = 'report.xls'
TFdict = {'是':True,'否':False}
isShuffleDict = {'顺序':False,'乱序':True}
ucmpDict = {'output':"","input":""}
resultDict = {True:'Pass',False:'Fail',None:'Unknown'}
nsrCheckableList = ["ROUTE",'BGP','OSPF','ISIS',"MCV4","MCV6","SRP","LDP"]
# maxLogShowNum = 5000

actionNameDict = {
              '[设备操作]主备切换':'dutRedu',
              '[设备操作]整机重启':'dutReload', 
              '[设备操作]板卡Reset-等待状态ok':'slotReset', 
              '[设备操作]板卡Reset-不等待':'slotResetNoWaitUp',
              '[设备操作]板卡PowerOn-等待状态ok':'slotPowerOn', 
              '[设备操作]板卡PowerOn-不等待':'slotPowerOnNoWaitUp', 
              '[设备操作]板卡PowerOff':'slotPowerOff', 
              '[设备操作]进程重启':'dutPkill', 
              '[设备操作]配置下发':'dutConfig',
              '[检查项]测试仪数值':'areaCheck',
              '[检查项]0消息':'momCheck',
              '[检查项]配置检查':'configCheck',
              '[检查项]命令回显包括':"showInfoCheck",
              '[检查项]命令回显不包括':"showNoInfoCheck",
              '[检查项]端口速率':"intfUsageCheck",
              '[检查项]端口均衡': 'portUsageCheck',
              '[检查项]Coredump':'coredumpCheck',
              '[检查项]面板口状态':'portStatusCheck',
              '[检查项]板卡状态':'slotStatusCheck',
              '[检查项]风扇状态':'fanStatusCheck',
              '[检查项]电源状态':'powerStatusCheck',
              '[检查项]内联口状态':'internalPortStatusCheck',
              '[检查项]带外口状态':'clutserCheck',
              '[检查项]线卡内存检查':"slotMemoryCheck",
              '[检查项]线卡CPU检查':"slotCpuCheck",
              '[检查项]业务主备表项一致性':"nsrCheck",
              '[检查项]死机信息':'exceptionCheck',
              '[检查项]自愈信息':'selfHealingCheck',
              '[检查项]线卡EMMC寿命':'emmcCheck',
              
}


expectDict = {
    '等于' : 'eq',
    '大于等于' : 'gt',
    '小于等于' : 'lt',
    '误差不超过±5%':'5pct',
    '与上次对比不超过':'ltbfe'
}

actionTips = {
              '[设备操作]主备切换':{'tips1':'NA','holder1':'NA','tips2':'NA','holder2':'NA'},
              '[设备操作]整机重启':{'tips1':'NA','holder1':'NA','tips2':'NA','holder2':'NA'}, 
              '[设备操作]板卡Reset-等待状态ok':{'tips1':'输入板卡号，多张板卡用英文逗号隔开，如：1,16,fe1','holder1':'输入板卡号'}, 
              '[设备操作]板卡Reset-不等待':{'tips1':'输入板卡号，多张板卡用英文逗号隔开，如：1,16,fe1','holder1':'输入板卡号'}, 
              '[设备操作]板卡PowerOn-等待状态ok':{'tips1':'输入板卡号，多张板卡用英文逗号隔开，如：1,16,fe1','holder1':'输入板卡号'}, 
              '[设备操作]板卡PowerOn-不等待':{'tips1':'输入板卡号，多张板卡用英文逗号隔开，如：1,16,fe1','holder1':'输入板卡号'}, 
              '[设备操作]板卡PowerOff':{'tips1':'输入板卡号，多张板卡用英文逗号隔开，如：1,16,fe1','holder1':'输入板卡号'}, 
              '[设备操作]进程重启':{'tips1':'双击编辑进程名','holder1':'双击编辑进程名'}, 
              '[设备操作]配置下发':{'tips1':'输入配置文件名，如:cfg1.txt，设备配置文件夹位置可在【其他设置】自定义','holder1':'输入配置文件名'},
              #'[设备操作]端口震荡':{'tips1':'双击编辑端口号','holder1':'双击编辑端口号'},
              '[检查项]测试仪数值':{'tips1':'执行此项需在[区域设置]中添加监控区域','holder1':'执行此项需在[区域设置]中添加监控区域','tips2':'NA','holder2':'NA'},
              '[检查项]0消息':{'tips1':'NA','holder1':'NA','tips2':'NA','holder2':'NA'},
              '[检查项]配置检查':{'tips1':'show run','holder1':'show run','tips2':'NA','holder2':'NA'},
              '[检查项]Coredump':{'tips1':'show coredump files','holder1':'show coredump files','tips2':'NA','holder2':'NA'},
              '[检查项]面板口状态':{'tips1':'show interface status','holder1':'show interface status','tips2':'NA','holder2':'NA'},
              '[检查项]板卡状态':{'tips1':'show version slot','holder1':'show version slot','tips2':'NA','holder2':'NA'},
              '[检查项]内联口状态':{'tips1':'show internal-interface status','holder1':'show internal-interface status','tips2':'NA','holder2':'NA'},
              '[检查项]电源状态':{'tips1':'show power','holder1':'show power','tips2':'NA','holder2':'NA'},
              '[检查项]风扇状态':{'tips1':'show fan detail','holder1':'show fan detail','tips2':'NA','holder2':'NA'},
              '[检查项]端口均衡':{'tips1':'双击编辑端口号','holder1':'双击编辑端口号'},
              '[检查项]线卡内存检查':{'tips1':'show memory slot all-info','holder1':'show memory slot all-info','tips2':'默认异常阈值为75.0%,可在【其他设置】中自定义','holder2':'默认异常阈值为75.0%,可在【其他设置】中自定义'},
              '[检查项]线卡CPU检查':{'show cpu':'show cpu','holder1':'show cpu','tips2':'默认异常阈值为75.0%,可在【其他设置】中自定义','holder2':'默认异常阈值为75.0%,可在【其他设置】中自定义'},
              '[检查项]命令回显包括':{'tips1':'输入命令','holder1':'输入命令','tips2':'输入回显预期字符串','holder2':'输入回显预期字符串'},
              '[检查项]命令回显不包括':{'tips1':'输入命令','holder1':'输入命令','tips2':'输入回显预期不存在字符串','holder2':'输入回显预期不存在字符串'},
              '[检查项]业务主备表项一致性':{'tips1':f'输入业务名称，多个业务名称用英文逗号隔开，如：OSPF,ISIS\n当前支持业务:{",".join(nsrCheckableList)}','holder1':'输入业务名称','tips2':'NA','holder2':'NA'},
              '[检查项]端口速率':{'tips1':'双击编辑端口号','holder1':'双击编辑端口号','tips2':'NA','holder2':'NA'},
              '[检查项]死机信息':{'tips1':'show exception slot all','holder1':'show exception slot all','tips2':'NA','holder2':'NA'},
              '[检查项]带外口状态':{'tips1':'show cluster-monitor status','holder1':'show cluster-monitor status','tips2':'NA','holder2':'NA'},
              '[检查项]线卡EMMC寿命':{'tips1':'show storage','holder1':'show storage','tips2':'默认异常阈值为85%,可在【其他设置】中自定义','holder2':'默认异常阈值为85%,可在【其他设置】中自定义'},
              '[检查项]自愈信息':{'tips1':'show psh selfhealing','holder1':'show psh selfhealing','tips2':'NA','holder2':'NA'},
}


actionArgs = {
              '[设备操作]主备切换':{'arg1':'myLineEdit()','arg2':'myLineEdit()', 'arg3':'actTimesSpinBox()'},
              '[设备操作]整机重启':{'arg1':'myLineEdit()','arg2':'myLineEdit()', 'arg3':'actTimesSpinBox()'}, 
              '[设备操作]板卡Reset-等待状态ok':{'arg1':'editableLineEdit()','arg2':'shuffleCombox()', 'arg3':'actTimesSpinBox()'}, 
              '[设备操作]板卡Reset-不等待':{'arg1':'editableLineEdit()','arg2':'shuffleCombox()', 'arg3':'actTimesSpinBox()'}, 
              '[设备操作]板卡PowerOn-等待状态ok':{'arg1':'editableLineEdit()','arg2':'shuffleCombox()', 'arg3':'actTimesSpinBox()'}, 
              '[设备操作]板卡PowerOn-不等待':{'arg1':'editableLineEdit()','arg2':'shuffleCombox()', 'arg3':'actTimesSpinBox()'}, 
              '[设备操作]板卡PowerOff':{'arg1':'editableLineEdit()','arg2':'shuffleCombox()', 'arg3':'actTimesSpinBox()'}, 
              '[设备操作]进程重启':{'arg1':'psTextEdit()','arg2':'shuffleCombox()', 'arg3':'actTimesSpinBox()'}, 
              '[设备操作]配置下发':{'arg1':'editableLineEdit()','arg2':'shuffleCombox()', 'arg3':'actTimesSpinBox()'},
              #'[设备操作]端口震荡':{'arg1':'portFlapTextEdit()','arg2':'shuffleCombox()', 'arg3':'actTimesSpinBox()'},
              '[检查项]测试仪数值':{'arg1':'myLineEdit()','arg2':'myLineEdit()', 'arg3':'myLineEdit()'},
              '[检查项]0消息':{'arg1':'myLineEdit()','arg2':'myLineEdit()', 'arg3':'myLineEdit()'},
              '[检查项]配置检查':{'arg1':'myLineEdit()','arg2':'myLineEdit()', 'arg3':'myLineEdit()'},
              '[检查项]Coredump':{'arg1':'myLineEdit()','arg2':'myLineEdit()', 'arg3':'myLineEdit()'},
              '[检查项]面板口状态':{'arg1':'myLineEdit()','arg2':'myLineEdit()', 'arg3':'myLineEdit()'},
              '[检查项]板卡状态':{'arg1':'myLineEdit()','arg2':'myLineEdit()', 'arg3':'myLineEdit()'},
              '[检查项]内联口状态':{'arg1':'myLineEdit()','arg2':'myLineEdit()', 'arg3':'myLineEdit()'},
              '[检查项]电源状态':{'arg1':'myLineEdit()','arg2':'myLineEdit()', 'arg3':'myLineEdit()'},
              '[检查项]风扇状态':{'arg1':'myLineEdit()','arg2':'myLineEdit()', 'arg3':'myLineEdit()'},
              '[检查项]端口均衡':{'arg1':'ucmpPortTextEdit()','arg2':'ucmpComboBox()', 'arg3':'myLineEdit()'},
              '[检查项]线卡内存检查':{'arg1':'myLineEdit()','arg2':'myLineEdit()', 'arg3':'myLineEdit()'},
              '[检查项]线卡CPU检查':{'arg1':'myLineEdit()','arg2':'myLineEdit()', 'arg3':'myLineEdit()'},
              '[检查项]命令回显包括':{'arg1':'showCmdLineEdit()','arg2':'expectStrLineEdit()', 'arg3':'myLineEdit()'},
              '[检查项]命令回显不包括':{'arg1':'showCmdLineEdit()','arg2':'expectStrLineEdit()', 'arg3':'myLineEdit()'},
              '[检查项]业务主备表项一致性':{'arg1':'editableLineEdit()','arg2':'myLineEdit()', 'arg3':'myLineEdit()'},
              '[检查项]端口速率':{'arg1':'ucmpPortTextEdit()','arg2':'ucmpComboBox()', 'arg3':'myLineEdit()'},
              '[检查项]死机信息':{'arg1':'myLineEdit()','arg2':'myLineEdit()', 'arg3':'myLineEdit()'},
              '[检查项]带外口状态':{'arg1':'myLineEdit()','arg2':'myLineEdit()', 'arg3':'myLineEdit()'},
              '[检查项]线卡EMMC寿命':{'arg1':'myLineEdit()','arg2':'myLineEdit()', 'arg3':'myLineEdit()'},
              '[检查项]自愈信息':{'arg1':'myLineEdit()','arg2':'myLineEdit()', 'arg3':'myLineEdit()'}
}


cwdCurrent = getcwd()
dftDutCfgFr = path.join(cwdCurrent,'dutCfg')
dftmomWlFn = path.join(cwdCurrent,'momList.txt')


def _async_raise(tid, exctype):
    """raises the exception, performs cleanup if needed"""
    tid = ctypes.c_long(tid)
    if not isclass(exctype):
        exctype = type(exctype)
    res = ctypes.pythonapi.PyThreadState_SetAsyncExc(tid, ctypes.py_object(exctype))
    if res == 0:
        raise ValueError("invalid thread id")
    elif res != 1:
        # """if it returns a number greater than one, you're in trouble,
        # and you should call it again with exc=NULL to revert the effect"""
        ctypes.pythonapi.PyThreadState_SetAsyncExc(tid, None)
        raise SystemError("PyThreadState_SetAsyncExc failed")

def stop_thread(thread):
    _async_raise(thread.ident, SystemExit)

def timePrint(s,end=''):
    if s.strip():
        print(strftime("%Y-%m-%d_%H:%M:%S ") + s,end='\r')

def is_file_open(file_path):
    try:
        file = open(file_path, 'a')
        file.close()
        return False  # 文件已关闭
    except IOError:
        return True  # 文件仍处于打开状态

def momTxtResolve(showtxt):
    #ls = []
    dic = {}
    regx = r"\S+\s+:\s+\d+"
    showls = findall(regx,showtxt)
    #print(showls)
    for i in showls:
        dic[i.replace(' ','').split(':')[0]] = int(i.replace(' ','').split(':')[1])
    return dic

def whiteListCompare(dutInfoLs,whiteListFn):
    dutInfoSet = set(dutInfoLs)
    whiteListSet = set(getTxtList(whiteListFn))
    return list(dutInfoSet - (dutInfoSet&whiteListSet))

def getTxtList(fn):
    fnStr = fn.strip(" ")
    if fnStr:
        if path.isfile(fn):
            #print('文件存在~')
            with open(fnStr,"r+") as f:
                txt = f.read()
                return [i.strip() for i in txt.split('\n')]
    else:
        #print("空输入")
        return []

def writeListTxt(ls,fn='test.txt',mode='w+'):
    with open(fn,mode,encoding='utf-8') as f:
        for i in ls:
            f.write(str(i)+'\n')

def writeStrTxt(st,fn='test.txt',mode="w+"):
    with open(fn,mode) as f:
        f.write(st)

def momInfoCheck(dutMomInfo,wlfn):
    flapInfo = {k:{} for k in dutMomInfo.keys()}
    wl = getTxtList(wlfn)
    wl += [
        "p_intf/data_intf/* ",
        "p_auth/scc_rng_obj/*",
        "p_auth/scc_api_rngobj/",
        "s_cluster/packet_accurate_fp/*",
        "s_route/rt_hit_timer/",
        "s_route/rt_hit_inner/",
        "s_cluster/mc_nh_mod/",
        "s_route/encap_hw_res/",
        "s_route/show_fib_req/*",
        "s_route/nh_hw_res/*",
        "s_route/encap_hw_res/* ",
        "s_route/ecmpgrp_hw_res/",
        "s_route/nh_hw_res/",
        "s_route/nhb_fwd_msg/",
        "s_route/ecmp_entry_hw_res/"]

    for slot in dutMomInfo:
        slotMomInfo = dutMomInfo[slot]
        for M,T in slotMomInfo.items():
            if (M not in wl) and T>0:
                flapInfo[slot].update({M:T})
    return flapInfo

def readTxtList(fn):
    with open(fn,'r+',errors="ignore") as f:
        txt = f.read()
    return txt.splitlines()

def isisNsrListCheck(ls):
    nls = []
    for i in range(len(ls)):
        isplit = ls[i].split()
        nls.append([isplit[1],isplit[2],isplit[4],isplit[5]+' '+isplit[6]])
    return nls

def mcv4NsrListCheck(ls):
    nls = []
    for i in range(len(ls)):
        isplit = ls[i].split()
        nls.append([isplit[0],isplit[1]+' '+isplit[2],isplit[4],isplit[5],isplit[-1]])
    return nls

def mcv6NsrListCheck(ls):
    nls = []
    for i in range(len(ls)):
        isplit = ls[i].split()
        nls.append([isplit[0],isplit[1]+' '+isplit[2],isplit[4],isplit[-1]])
    return nls


def sumDictValues(d):
    return sum(list(d.values()))


def cfgCompare(fn1,fn2):
    md5Reg = r'\$\S+\$|[A-F0-9]{32}'
    newStr = r'$MD5String'
    newTxt1 = sub(md5Reg,newStr,readTxtStr(fn1))
    newTxt2 = sub(md5Reg,newStr,readTxtStr(fn2))
    if not newTxt1 == newTxt2:
        print('配置前后不一致，请对比文件{}和{}'.format(fn1,fn2))
        return False
    else:
        return True


def readTxtStr(fn):
    with open(fn,'r+',encoding='utf-8',errors="ignore") as f:
        txt = f.read()
    return txt


def fileRouteCheck(fn):
    fnStr = fn.strip(" ")
    if fnStr:
        if path.isfile(fn):
            return fnStr
        else:
            return ''
    else:
        return ''

def slotCheck(slotDict,checkDict):
    MStatus = ['master','backup']
    errorSlot = []
    for slot,status in slotDict.items():
        if 'M' not in slot:
            if checkDict.get(slot) != status:
                errorSlot.append(slot)
        else:
            if checkDict.get(slot) not in MStatus:
                errorSlot.append(slot)
    if errorSlot:
        print('板卡状态异常！')
        for eSlot in errorSlot:
            print('{} ： {}'.format(eSlot,checkDict[eSlot]))
        return False
    else:
        return True
    

def resultTF(resultls):
    return sum(resultls) == len(resultls)


def xlsxTimeList(ls,dfNum=0):
    nls = []
    for i in ls:
        if i:
            nls.append(float(i))
        else:
            nls.append(dfNum)
    return nls

def dirRouteCheck(fr):
    if path.isdir(fr):
        return fr
    else:
        return ''

def writeCfgTxt(cfgstr,fn='test.txt',mode="w+"):
    cfgList = cfgstr.splitlines()
    ncfgList = []
    for cfgLine in cfgList:
        if cfgLine:
            ncfgList.append(cfgLine)
    writeListTxt(ncfgList,fn,mode=mode)
        
def printList(ls,seq=False):
    if seq:
        for num in range(len(ls)):
            print('{}. {}'.format(num+1,str(ls[num])))
    else:
        for i in ls:
            print(str(i))

def isExist(v):
    try:
        dir(v)
        return True
    except:
        return False

def getTimeStampNow():
    return datetime.now().strftime('%Y%m%d%H%M%S')


def printMomDict(d):
    for slot,momInfo in d.items():
        print("【Slot {}】".format(slot))
        for momName in momInfo.keys():
            print(momName)

def getQtableItem(x):
    if not x:
        return str(x)
    else:
        return None
    
def slotLsFmt(ls):
    return [i.upper() for i in ls]

def actErrMsgStr(rowNum,actName,argName = '1',other=',不能置空'):
    return '【拷机设置】第{}行"{}"参数{}有误'.format(rowNum,actName,argName) + other + "。"

def areaErrMsgStr(rowNum,colName,argNum = 1,other=',不能置空'):
    return '【区域设置】第{}行{}参数有误'.format(rowNum,colName)

def getAreaPic(areaTuple):
    dataFolder = 'areaData/'
    fp = path.join(dataFolder,'{}.png'.format(getGMT()))
    im = ImageGrab.grab(areaTuple)  
    im.save(fp)
    return path.abspath(fp)

def createFloder(Fname):
    try:
        if not path.isdir(Fname):
            mkdir(Fname)
    finally:
        return path.abspath(Fname)
    
def createFile(Fname):
    try:
        if not path.isdir(Fname):
            with open(Fname,'w+') as f:
                pass
    finally:
        return path.abspath(Fname)

def createMoudleFile(Fname):
    try:
        if not path.isdir(Fname):
            with open(Fname,'w+') as f:
                f.write(cfgExplanation)
    finally:
        return path.abspath(Fname)


def actionDictCheck(actionDict : dict, txtPath = 'dutCfg'):
    errorList = []
    slotName = [str(i) for i in range(1,17)] + [str('FE{}'.format(i)) for i in range(1,5)] + [f'{x}/{y}' for x in range(1,17) for y in (1,2)]
    for k,v in actionDict.items():
        actionCN = v.get('action')
        action = actionNameDict[actionCN]
        waitFor = v.get('waitFor')
        if action == 'slotReset' or action == 'slotPowerOn' or action == 'slotPowerOff':
            slotListTxt = v.get('arg_1').strip().upper()
            if not slotListTxt:
                errorList.append(actErrMsgStr(k+1,actionCN))
            else:
                slotList = [s.strip() for s in slotListTxt.split(',')]
                for slot in slotList:
                    if not slot.strip().upper() in slotName:
                        errorList.append(actErrMsgStr(k+1,actionCN,other=',板卡号格式有误'))
                        break
                if not len(set(slotList)) == len(slotList):
                    errorList.append(actErrMsgStr(k+1,actionCN,other=",板卡号输入重复"))
        
        elif action == 'dutConfig':
                txtName = v.get('arg_1').strip()
                if not txtName:
                    errorList.append(actErrMsgStr(k+1,actionCN))
                    continue
                try:
                    txtFn =  path.join(txtPath,txtName)
                    assert path.isfile(txtFn)
                except:
                    errorList.append(actErrMsgStr(k+1,actionCN,other=",文件{}不存在".format(path.abspath(txtFn))))
                    continue

        elif action == 'dutPkill':
            psTxt= v.get('arg_1').strip()
            if not psTxt:
                errorList.append(actErrMsgStr(k+1,actionCN))
        
        elif action == 'portUsageCheck' or action == 'portFlap' or action == 'portUsageCheck':
            portTxt = v.get('arg_1').strip()
            if not portTxt:
                errorList.append(actErrMsgStr(k+1,actionCN))

        elif action == 'showInfoCheck':
            showCmd = v.get('arg_1').strip()
            expectStr = v.get('arg_2').strip()
            if not showCmd:
                errorList.append(actErrMsgStr(k+1,actionCN))
            if not expectStr:
                errorList.append(actErrMsgStr(k+1,actionCN,"2"))


        elif action == 'nsrCheck':
            showCmd = v.get('arg_1').strip()
            if not showCmd:
                errorList.append(actErrMsgStr(k+1,actionCN))
            else:
                ls = [i.strip().upper() for i in showCmd.split(',')]
                for i in ls:
                    if i not in nsrCheckableList:
                        errorList.append(actErrMsgStr(k+1,actionCN,other=f'，业务名称输入有误，请输入{",".join(nsrCheckableList)}其中的一个或多个；若有多个业务，用英文逗号,分隔'))
                        break 
                if not len(set(ls)) == len(ls):
                    errorList.append(actErrMsgStr(k+1,actionCN,other=",业务名称输入重复"))
        
        if not waitFor:
            errorList.append(actErrMsgStr(k+1,actionCN,"[等待时间]"))

    return errorList


def areaDictCheck(areaDict : dict):
    errorList = []
    for k,v in areaDict.items():
        areaTuple = v.get('areaTuple')
        exceptValue = v.get('expectValue')
        try:
            at = eval(areaTuple)
            assert isinstance(at,tuple)
            #assert len(at) == 4
            assert at[0] < at[2] and at[1] < at [3]
        except Exception as e:
            errorList.append(areaErrMsgStr(k+1,'[监控坐标]'))

        try:
            int(exceptValue)
        except:
            errorList.append(areaErrMsgStr(k+1,'[预期值]'))
    return errorList



def argListCheck(argStr : str,ls : list):
    args = argStr.strip()
    if not args:
        return 0
    else:
        for i in args.split():
            if i not in ls:
                return False
    return 1

def getGMT():
    return time()

def list2Str(ls,seq=False):
    S = ''
    for k,v in enumerate(ls,start=1):
        S += f'{k}.{v}\n'
    return S

def getActionsList(d : dict):
    return [actionNameDict.get(v.get('action')) for v in d.values()]

def getQwidgetValue(q):
    if isinstance(q,QComboBox):
        return q.currentText()

    elif isinstance(q,QLineEdit):
        return q.text()
    
    elif isinstance(q,QCheckBox):
        return q.isChecked()
    
    elif isinstance(q,QTextEdit):
        return q.toPlainText()
    
    elif isinstance(q,QSpinBox):
        return int(q.text())
    else:
        return ''

def setQwidgetValue(q,value):
    if isinstance(q,QComboBox):
        q.setCurrentText(value)

    elif isinstance(q,QLineEdit):
        q.setText(value)
    
    elif isinstance(q,QCheckBox):
        q.setChecked(value)
    
    elif isinstance(q,QTextEdit):
        q.setText(value)

    elif isinstance(q,QSpinBox):
        q.setValue(value)
    else:
        return False


def readTxtCfgShuffle(fn) -> list:
    txt = readTxtStr(fn)
    splitPattern = ' *#-py pass *'
    #如果配置文件带有#-py pass
    if '#-py pass' in txt:
        splitList = split(splitPattern, txt)
        shuffle(splitList)
        ls = (''.join(splitList)).splitlines()
    else:
        ls = txt.splitlines()
        shuffle(ls)
    
    return list(filter(lambda x: x != '', ls))
    
    # return ls

def readPsListShuffle(txt) -> list:
    splitPattern = ' *#-py pass *'
    #如果配置文件带有#-py pass
    if '#-py pass' in txt:
        splitList = split(splitPattern, txt)
        shuffle(splitList)
        ls = (''.join(splitList)).splitlines()
    else:
        ls = txt.splitlines()
        shuffle(ls)
    
    return list(filter(lambda x: x != '', ls))

def readPortPyCfgList(portCfg : str,isShuffle=True) -> list:
    ls = split(pyCmdSplitReg, portCfg)
    pyls = findall(pyCmdSplitReg,portCfg)
    while len(pyls) < len(ls):
        pyls.append(pyCmdStr)

    newTxtList = [cmd + pycmd +'\n' for cmd,pycmd in zip(ls,pyls)]   
    if isShuffle: 
        shuffle(newTxtList)
    newcmdtxt = ''.join(newTxtList)
    cmdlist = newcmdtxt.split('\n')
    return list(filter(lambda x: x != '', cmdlist))


def readPyCfgList(psCfg : str,isShuffle=True) -> list:
    ls = split(pyCmdSplitReg, psCfg)
    pyls = findall(pyCmdSplitReg,psCfg)
    while len(pyls) < len(ls):
        pyls.append(pyCmdStr)

    newTxtList = [cmd + pycmd +'\n' for cmd,pycmd in zip(ls,pyls)]   
    if isShuffle: 
        shuffle(newTxtList)
    newcmdtxt = ''.join(newTxtList)
    cmdlist = newcmdtxt.split('\n')
    return list(filter(lambda x: x != '', cmdlist))

def writeResultTxt(d,fn):
    if d:
        s = '拷机次数:\n'
        for k,v in d.items():
            s += f'{k}:{v}次\n'
        #print(d)
        timePrint(f'拷机结果保存至{fn}')
        writeStrTxt(s,fn)


def printStatusCgdDict(d : dict):
    for k,v in d.items():
        print(f'{k}状态变化 : {v}')


def portStatusCheck(ddft : dict, dnew : dict):
    changedict = {}
    for port in ddft:
        dftStatus = ddft.get(port)
        newStatus = dnew.get(port)
        if dftStatus != newStatus:
            changedict.update({port:f'{dftStatus} -> {newStatus}'})

    if changedict:
        printStatusCgdDict(changedict)
        return False
    else:
        return True


def slotStatusCheck(ddft : dict, dnew : dict):
    changedict = {}
    for slot in ddft:
        dftStatus = ddft.get(slot)
        newStatus = dnew.get(slot)
        if slot == 'M1' or slot == 'M2':
            if (dftStatus == 'master' or dftStatus == 'backup') and newStatus == 'none':
                changedict.update({slot:f'{dftStatus} -> {newStatus}'})
        else:
            if dftStatus != newStatus:
                changedict.update({slot:f'{dftStatus} -> {newStatus}'})

    if changedict:
        printStatusCgdDict(changedict)
        return False
    else:
        return True

def powerStatusCheck(ddft : dict, dnew : dict):
    changedict = {}
    for power in ddft:
        dftStatus = ddft.get(power)
        newStatus = dnew.get(power)
        if dftStatus != newStatus:
            changedict.update({power:f'{dftStatus} -> {newStatus}'})
    if changedict:
        printStatusCgdDict(changedict)
        return False
    else:
        return True
    
def fanStatusCheck(ddft : dict, dnew : dict):
    changedict = {}
    for fan in ddft:
        dftStatus = ddft.get(fan)
        newStatus = dnew.get(fan)
        if dftStatus != newStatus:
            changedict.update({fan:f'{dftStatus} -> {newStatus}'})
    if changedict:
        printStatusCgdDict(changedict)
        return False
    else:
        return True


def ucmpJudge(d : dict ,mode, percentage = 0.05):
    flag = True
    if not d:
        return flag
    avgUsage = sum(d.values()) / len(d)

    if avgUsage == 0:
        return flag
    
    for port,usageNum in d.items():
        error = abs((usageNum - avgUsage) / avgUsage)
        if error >= percentage:
            flag = False
            print("端口{0}的{2}速率为{1}%，端口组平均{2}速率为{3:.3f}%，误差大于{4:.2%}".format(port,usageNum,mode,avgUsage,percentage))

    return flag
    

def printDict(d:dict,s=' '):
    #finStr = ''
    for k,v in d.items():
        print(f'{k}{s}{v}')



def createReportXls(Fname=reportFn):
    try:
        if not path.isfile(Fname):
            # 创建一个新的工作簿
            wb = xlwt.Workbook()
            # 选择默认的工作表
            # ws = wb.active
            ws = wb.add_sheet('report')
            # 在单元格 A1 和 B1 中添加一些数据
            pattern = xlwt.Pattern()
            pattern.pattern = xlwt.Pattern.SOLID_PATTERN
            pattern.pattern_fore_colour = 0x16
            # 创建一个样式，将上面创建的图案应用到样式中
            style = xlwt.XFStyle()
            style.pattern = pattern
            ws.col(0).width = 256*25
            ws.protect = True
            
            # formula = xlwt.Formula('C2/B2')
            format_percent = xlwt.XFStyle()
            format_percent.num_format_str = '0.00%'

            ws.write(0, 0, '拷机描述', style)
            ws.write(0, 1, '执行次数', style)
            ws.write(0, 2, 'PASS数', style)
            ws.write(0, 3, 'PASS率', style)
            # ws.write(1, 0, '未命名用例')
            # ws.write(1, 1, '0')
            # ws.write(1, 2, '0')
            # # ws.write(1, 3, style=formula)
            # ws.write(1, 3, 0, style=format_percent)

            wb.save(Fname)
    except Exception as e:
        print(e)
    finally:
        return path.abspath(Fname)


def getActionDictXls(Fn=reportFn):
    createReportXls()
    d = {} #{NAME : (done,pass)}
    wb = xlrd.open_workbook(Fn)
    ws = wb.sheet_by_name("report")
    desList = ws.col_values(0,start_rowx=1)
    doneList = ws.col_values(1,start_rowx=1)
    passList = ws.col_values(2,start_rowx=1)
    for i in range(ws.nrows-1):
        d[desList[i]] = int(doneList[i]) , int(passList[i])
    return d


def writeXlsDict(d : dict,Fn=reportFn):
    wb = xlrd.open_workbook(Fn)
    # ws = wb.sheet_by_name("report")
    wbCopy = copy(wb)
    wsCopy = wbCopy.get_sheet(0)
    
    desList = list(d.keys())
    doneList = []
    passList = []
    for v in d.values():
        doneList.append(v[0])
        passList.append(v[1])

    pattern = xlwt.Pattern()
    pattern.pattern = xlwt.Pattern.SOLID_PATTERN
    pattern.pattern_fore_colour = 0x16
    # 创建一个样式，将上面创建的图案应用到样式中
    style = xlwt.XFStyle()
    style.pattern = pattern
    wsCopy.protect = True

    # formula = xlwt.Formula('C2/B2')
    format_percent = xlwt.XFStyle()
    format_percent.num_format_str = '0.00%'
    wsCopy.write(0, 0, '拷机描述', style)
    wsCopy.write(0, 1, '执行次数', style)
    wsCopy.write(0, 2, 'PASS数', style)
    wsCopy.write(0, 3, 'PASS率', style)

    for i in range(len(d)):
        wsCopy.write(i+1, 0, desList[i])
        wsCopy.write(i+1, 1, doneList[i])
        wsCopy.write(i+1, 2, passList[i])
        wsCopy.write(i+1, 3, passList[i]/doneList[i], style = format_percent)
    wsCopy.col(0).width = 256*25
    wbCopy.save(Fn)


def isDictValueAllNone(d:dict):
    if not d:
        return True
    ls = list(d.values())
    for v in ls:
        if v != None:
            return False
    return True

def getPortIndex(port):
    index = findall('\d+\S*',port)
    if index:
        return index[0]
    else:
        return ''

def errorJudge(real,expect,ep=0.05):
    if not expect:
        return real == 0
    else:
        return (abs(real-expect) / expect) <= ep
    

def portUsageCheck(dftDict:dict,portUsageDict:dict,mode = 'output',errorPercent=0.05):
    errorMsg = []
    for port in portUsageDict:
        index = getPortIndex(port)

        portInfoDictNow = portUsageDict.get(port)
        if not portInfoDictNow:
            errorMsg.append(f'未获取到端口{port}速率')
            continue
        else:
            realUsage = portInfoDictNow.get(mode)
        
        portInfoDictDft = dftDict.get(index)
        if not portInfoDictDft:
            errorMsg.append(f'未获取到端口{port}初始速率')
            continue
        else:
            expectUsage = portInfoDictDft.get(mode)

        if not errorJudge(realUsage,expectUsage,errorPercent):
            errorMsg.append('{}预期{}速率:{}%,实际速率:{}%,误差大于{4:.2%}'.format(port,mode,expectUsage,realUsage,errorPercent))

    if errorMsg:
        printList(errorMsg)
        return False
    else:
        return True
        
def thresCheck(d : dict,threhold:float,name='',mode='gt'):
    errorDict = {}
    if mode == 'gt':
        for k,v in d.items():
            if float(v) > threhold:
                errorDict.update({k:v+'%'})

    else:
        for k,v in d.items():
            if float(v) < threhold:
                errorDict.update({k:v+'%'})
    
    if errorDict:
        print(f"检查到{name}值异常，异常阈值为{threhold}%")
        printDict(errorDict,f"的{name}百分比为")
        return False
    else:
        return True

def clusterStatusCheck(clusterInfo : dict):
    errorList = []
    # is2M = False
    slotClusterStatus = ('*UP','-')
    
    for slot in clusterInfo:
        staus = clusterInfo.get(slot)
        if ("M1" in clusterInfo.keys()) or ('M2' in clusterInfo.keys()):
            # is2M = True
            slotClusterStatus = ('*UP','UP')
        if staus != slotClusterStatus:
            errorList.append(f'Slot {slot}带外口状态异常！')

    # print('!!!' + str(slotClusterStatus))
    if errorList:
        printList(errorList)
        return False
    else:
        return True
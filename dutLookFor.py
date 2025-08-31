import xlrd
from funcs import *
from my_telnetlib_ck import *
from feiShuRobot import *
from requests_toolbelt import MultipartEncoder
from ipaddress import ip_address
from threading import Thread,Event
from tqdm import tqdm
# from OCRtest import *



def dutConnect(dutInfo,maxRetryTimes=20,retryInterval=10):
    tel = TelnetClient()
    for i in range(maxRetryTimes):
        if tel.login_host(dutInfo["ip"],dutInfo["UserName"],dutInfo["PassWord"],Port=23):
            return tel
        else:
            sleep(retryInterval)
    return False

if __name__ == '__main__' :
    pass
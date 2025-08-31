from PIL import ImageGrab
import requests
import base64
 
def baiduOcr(fn):
    # 识别图片
    request_url = "https://aip.baidubce.com/rest/2.0/ocr/v1/accurate_basic"
    f = open(fn, 'rb')
    img = base64.b64encode(f.read())
    params = {"image":img}
    access_token = '24.3bb4f9509152bcd5d208f44cfad2f11f.2592000.1680400541.282335-30910014'
    request_url = request_url + "?access_token=" + access_token
    headers = {'content-type': 'application/x-www-form-urlencoded'}
    response = requests.post(request_url, data=params, headers=headers)
    if response:
        print (response.json())
 
# 调用
baiduOcr('data/20230302142753.png')
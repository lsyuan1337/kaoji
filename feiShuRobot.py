import requests
import json
from requests_toolbelt import MultipartEncoder
from datetime import datetime

def getDictStr(d:dict,s='-'):
    #keyList = list(d)
    result = ''
    for k,v in d.items():
        result += f'      {k}{s}{v}\n'
    return result
    
class FeishuTalk:
    # 机器人webhook
    def __init__(self,url):
        self.url = url

    def getToken(self):
        url = "https://open.feishu.cn/open-apis/auth/v3/tenant_access_token/internal"
        headers = {
            "Content-Type": "application/json; charset=utf-8",
        }
        payload_data = {
            "app_id": 'cli_a49787ef1039100b',
            "app_secret": '9Lo05QyeG7s5bcFGnB9fcj8E3fCIfmzB'
        }
        response = requests.post(url=url, data=json.dumps(payload_data), headers=headers).json()
        token = response['tenant_access_token']
        return token
        #print(response)

    # 发送文本消息
    def sendTextMsg(self, content):
        #url = self.chatGPT_url
        headers = {
            "Content-Type": "application/json; charset=utf-8",
        }
        payload_message = {
            "msg_type": "text",
            "content": {
                "text": content
            }
        }
        response = requests.post(url=self.url, data=json.dumps(payload_message), headers=headers)
        return response.json
    
    def sendTextMsgList(self,ls):
        for msgDict in ls:
            content = msgDict.get("msg")
            image = msgDict.get('imagPath')
            self.sendCheckMsg(content,image)


    def sendCheckMsg(self,content,imag):
        headers = {
            "Content-Type": "application/json; charset=utf-8",
        }
        payload_message = {
            #"email": "fanlv@bytedance.com",
            "msg_type": "post",
            "content": {
                "post": {
                    "zh_cn": {
                    "title": '【监控值异常提醒】 ' + datetime.now().strftime('%Y-%m-%d %H:%M:%S'),
                    "content": [
                    [
                        {
                            "tag": "text",
                            "un_escape": True,
                            "text": content + '详见下图:'
                        },
                    ],
                    [   
                        {
                            "tag": "img",
                            "image_key": self.getImagKey(imag),
                                                }
                                            ]
                                        ]
                                    }
                                }
                            }
                        }
        response = requests.post(url=self.url, data=json.dumps(payload_message), headers=headers)
        # return response.json
        #print(response.json)
    

    def getImagKey(self,image_path):
        with open(image_path, 'rb') as f:
            image = f.read()
        resp = requests.post(
            url='https://open.feishu.cn/open-apis/image/v4/put/',
            headers={'Authorization': "Bearer {}".format(self.getToken())},
            files={
                "image": image
            },
            data={
                "image_type": "message"
            },
            stream=True)
        resp.raise_for_status()
        content = resp.json()
        #print(content)
        if content.get("code") == 0:
            return content['data']['image_key']
        
    def sendFailText(self,dscription,ip,times,errorDict):
        headers = {
            "Content-Type": "application/json; charset=utf-8",
        }
        errorStep = getDictStr(errorDict)
        #print(errorStep)
        payload_message = {
            #"email": "fanlv@bytedance.com",
            "msg_type": "post",
            "content": {
                "post": {
                    "zh_cn": {
                    "title": ' 【拷机检查项FAIL提示】 ' + datetime.now().strftime('%Y-%m-%d %H:%M:%S'),
                    "content": [
                    [
                        {
                            "tag": "text",
                            "un_escape": True,
                            "text": f"   拷机描述:【{dscription}】\n   设备IP:【{ip}】\n"
                        },
                    ], 
                    [
                        {
                            "tag": "text",
                            "un_escape": True,
                            "text": f'   第{times}轮拷机检查项fail：\n{getDictStr(errorDict)}'
                        },
                    ],
                                        ]
                                    }
                                }
                            }
                        }
        
        response = requests.post(url=self.url, data=json.dumps(payload_message), headers=headers)
        # print(response)

if __name__ == "__main__":
    r = FeishuTalk('https://open.feishu.cn/open-apis/bot/v2/hook/82918516-22dd-41bb-910e-b227dbeb3720')
    r.sendFailText('1234复现','10.110.1.115','123',{'1':'内联口状态','2':'coredump'})
from PIL import Image,ImageGrab  
import pytesseract.pytesseract
from re import findall


def getDigitStr(s):
    Ds = ''.join(findall("\d",s)) #正则表达式获取所有数值并拼接
    # print(Ds)
    if Ds:
        return Ds
    

def doOcr(fpath,psm=6): #检测出数值则返回数值，否则None
    #pytesseract接口
    config = r'-c tessedit_char_whitelist=1234567890 --psm {}'.format(psm) #设置识别白名单为数字，
    #print(config)
    crops = pytesseract.image_to_string(Image.open(fpath), lang='eng',config=config)
    # print(crops)
    result = getDigitStr(crops) #获取识别结果中的所有数字
    # print(result)
    if result:
        return int(result) #识别到返回整型数字
    else:
        return 0 #未识别到返回0

    #ddddocr接口
    # from ddddocr import DdddOcr
    # ocr = DdddOcr(show_ad=False)
    # with open(fpath, 'rb') as f:     # 打开图片
    #     img_bytes = f.read() 
    # crops = ocr.classification(img_bytes)  # 识别

    
    
def getOcrResult(fpath):
    # config = r''
    crops = pytesseract.image_to_string(Image.open(fpath), lang='eng')
    if crops:
        return crops
    else:
        return None


def pctErrJudge(real,expect,EP=0.05):
    if expect == 0:
        return real == 0
    
    errCrop = (real - expect) / expect
    if errCrop > EP:
        return False
    else:
        return True
    
def digitJudge(real,expect,mode='eq'):
    try:
        if mode == 'eq':
            #print('预期值={}，'.format(expect),end='')
            result = real == expect
        elif mode == 'gt':
            #print('预期值≥{}，'.format(expect),end='')
            result = real >= expect
        elif mode == 'lt':
            #print('预期值≤{}，'.format(expect),end='')
            result =  expect >= real
        elif mode == '5pct':
            result = pctErrJudge(real,expect)
        # elif mode == 'ltbfe':
        #     result == ''
    except:
        result = False
    finally:
        return result
    


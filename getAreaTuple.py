import pynput.mouse as pm
import pyperclip

def getArea():
    print('依次点击区域左上/右下坐标点（每个区域只支持识别一行正整数）:')
    def ls_k_thread():
        global posTuple
        posTuple = tuple()
        while len(posTuple) < 4:
            with pm.Listener(on_click=on_click) as pmlistener:
                pmlistener.join()
    
    def on_click(x, y, button, pressed):
        global posTuple
        # 监听鼠标点击
        if pressed:
            mxy = (x, y)
            print(mxy)
            posTuple += mxy
            
        if not pressed:
            return False
    ls_k_thread()
    return str(posTuple)


def getAreaTupleFunc():
    s = getArea()
    pyperclip.copy(s)
    print('已复制坐标：{}'.format(s))
    return s


if __name__ == "__main__":
    input('Press Enter to continue...')
    while True:
        getAreaTupleFunc()

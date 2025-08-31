from pymouse import PyMouse
import pynput.mouse as pm
import threading


def getMousePst():
    m = PyMouse()
    return m.position()

#main()

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
        #print("按下坐标")
        mxy = (x, y)
        print(mxy)
        posTuple += mxy
    if not pressed:
        return False


def analyse_pic_thread():
    r = threading.Thread(target=ls_k_thread)
    r.start()

analyse_pic_thread()


import pynput.mouse as pm
import pyperclip
import cv2
import numpy as np
from PIL import ImageGrab
import tkinter as tk
from tkinter import simpledialog


def getArea1():
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


def getArea():
    print('请使用鼠标拖拽选择区域，按ESC键取消选择...')
    
    # 创建全屏透明窗口用于截图
    root = tk.Tk()
    root.attributes('-fullscreen', True)
    root.attributes('-alpha', 0.3)
    root.configure(bg='black')
    
    # 创建画布用于绘制矩形
    canvas = tk.Canvas(root, bg='black', highlightthickness=0)
    canvas.pack(fill=tk.BOTH, expand=True)
    
    start_x, start_y = 0, 0
    end_x, end_y = 0, 0
    rect = None
    cancelled = False
    
    def on_mouse_press(event):
        nonlocal start_x, start_y, rect
        start_x, start_y = event.x, event.y
        rect = canvas.create_rectangle(start_x, start_y, start_x, start_y,
                                     outline='red', width=1,  # 更粗的红色边框
                                     fill='',  # 透明填充
                                     stipple='gray50')  # 半透明点状图案
    
    def on_mouse_drag(event):
        nonlocal rect
        if rect:
            canvas.coords(rect, start_x, start_y, event.x, event.y)
            # 动态调整矩形透明度，根据区域大小增加可见性
            area_size = abs(event.x - start_x) * abs(event.y - start_y)
            if area_size > 10000:  # 区域较大时增加透明度
                canvas.itemconfig(rect, stipple='gray25')
            else:
                canvas.itemconfig(rect, stipple='gray50')
    
    def on_mouse_release(event):
        nonlocal rect, end_x, end_y
        if rect:
            end_x, end_y = event.x, event.y
            # 确保坐标顺序正确（左上角到右下角）
            x1 = min(start_x, end_x)
            y1 = min(start_y, end_y)
            x2 = max(start_x, end_x)
            y2 = max(start_y, end_y)
            
            posTuple = (x1, y1, x2, y2)
            #print(f'选择的区域坐标: {posTuple}')
            root.quit()
            root.destroy()
    
    def on_escape(event):
        nonlocal cancelled
        cancelled = True
        root.quit()
        root.destroy()
    
    canvas.bind('<ButtonPress-1>', on_mouse_press)
    canvas.bind('<B1-Motion>', on_mouse_drag)
    canvas.bind('<ButtonRelease-1>', on_mouse_release)
    canvas.bind('<Escape>', on_escape)
    canvas.focus_set()  # 确保画布可以接收键盘事件
    
    root.mainloop()
    
    # 返回最后选择的坐标或取消状态
    if cancelled:
        return None
    else:
        return str((min(start_x, end_x), min(start_y, end_y), max(start_x, end_x), max(start_y, end_y)))


def getAreaTupleFunc():
    s = getArea()
    if s is None:
        print('选择已取消')
        return None
    print("区域坐标已复制到剪贴板：", s)
    pyperclip.copy(s)
    return s

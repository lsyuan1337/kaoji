import sys
# from PyQt5 import QtCore, QtGui, QtWidgets
from PyQt5.QtWidgets import QApplication,QMainWindow,QMessageBox
from PyQt5.QtGui import QIcon
from  OCR_Area_Table_Real import *
# from my_logger import *

if __name__ == "__main__":
    app = QApplication(sys.argv)
    app.setWindowIcon(QIcon('D:\PycharmProjects\kaojiUI\J.jpeg'))
    mainWindow = QMainWindow()
    mainUI = Ui_OCR_UI()
    mainUI.setupUi(mainWindow)
    mainWindow.show()
    sys.exit(app.exec_())
    



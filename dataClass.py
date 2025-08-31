#数据类型
import typing
from PyQt5 import QtGui
from PyQt5.QtWidgets import QWidget
from funcs import *

from PyQt5.QtWidgets import *
from PyQt5.QtCore import QRegExp,Qt,QRegularExpression
from PyQt5.QtGui import QRegExpValidator,QIntValidator,QPixmap,QTextCharFormat, QFont


class actionCombox(QComboBox):
    def __init__(self,f) -> None:
        super(actionCombox,self).__init__()
        self.addItems(actionNameDict)
        self.currentIndexChanged.connect(f)

    def wheelEvent(self, event) -> None:
        event.ignore()
    
class shuffleCombox(QCheckBox):
    def __init__(self) -> None:
        super(shuffleCombox,self).__init__()
        self.setText('乱序')
        self.setChecked(False)

class myLineEdit(QLineEdit):
    def __init__(self):
        super(myLineEdit,self).__init__()
        self.setStyleSheet('QLineEdit{border-width:0;border-style:outset}')
        self.setAlignment(Qt.AlignLeft)
        self.setReadOnly(True)
        self.setPlaceholderText('NA')


class myTextEdit(QTextEdit):
    def __init__(self):
        super(myTextEdit,self).__init__()
        self.setStyleSheet('QLineEdit{border-width:0;border-style:outset}')
        self.setAlignment(Qt.AlignLeft)
        self.setReadOnly(True)
        self.setAcceptRichText(False)
        self.setLineWrapMode(QTextEdit.NoWrap)
        self.setHorizontalScrollBarPolicy(Qt.ScrollBarAlwaysOff)
        self.itemName = 'item'
        self.holderText = ''
        # char_format = QTextCharFormat()
        # char_format.setFontPointSize(12)
        # self.selectAll()
        # self.mergeCurrentCharFormat(char_format)

    def mouseDoubleClickEvent(self, event):
        if event.button() == Qt.LeftButton:
            dialog = QDialog()
            dialog.setWindowTitle("编辑内容")
            
            # 创建标签和文本编辑器
            label = QLabel(f"输入{self.itemName}，多个{self.itemName}用回车分隔:")
            edit_text = QTextEdit(dialog)
            edit_text.setPlaceholderText(self.holderText)
            # 设置布局
            layout = QVBoxLayout()
            layout.addWidget(label)
            layout.addWidget(edit_text)
            # edit_text.setPlainText('\n'.join(self.toPlainText().split(',')))
            edit_text.setPlainText((self.toPlainText()))
            # 创建保存和取消按钮
            button_box = QHBoxLayout()
            save_button = QPushButton("保存")
            cancel_button = QPushButton("取消")
            button_box.addStretch(1)
            button_box.addWidget(save_button)
            button_box.addWidget(cancel_button)
            layout.addLayout(button_box)
            
            # 连接按钮的信号和槽函数
            save_button.clicked.connect(lambda: self.save_text(dialog, edit_text))
            cancel_button.clicked.connect(dialog.reject)
            
            # 显示对话框并等待用户关闭
            dialog.setLayout(layout)
            dialog.exec_()
    
    def save_text(self, dialog, edit_text):
        self.setPlainText(edit_text.toPlainText())
        dialog.accept()

    def getCmdTxt(self,edit_text):
        return edit_text.toPlainText()


class portFlapTextEdit(myTextEdit):
    def __init__(self):
        super(portFlapTextEdit,self).__init__()
        self.itemName = '端口号'
        self.holderText = '示例：\nHundredGigabitEthernet 1/0/1\nAggregatePort 2\nrange TenGigabitEthernet 3/0/1 - 8'

class ucmpPortTextEdit(myTextEdit):
    def __init__(self):
        super(ucmpPortTextEdit,self).__init__()
        self.itemName = '端口号'
        self.holderText = '示例：\nHundredGigabitEthernet 1/0/1\nTenGigabitEthernet 2/0/1\nAggregatePort 3'

class psTextEdit(myTextEdit):
    def __init__(self):
        super(psTextEdit,self).__init__()
        self.itemName = '进程号'
        self.holderText = '示例：\nnsm.elf\npim6d.elf\nisis.elf'


class editableLineEdit(myLineEdit):
    def __init__(self):
        super(editableLineEdit,self).__init__()   
        self.setReadOnly(False)
        self.setText('')

class waitTimeLineEdit(myLineEdit):
    def __init__(self):
        super(waitTimeLineEdit,self).__init__()
        self.setReadOnly(False)
        self.setText('0')
        intV = QIntValidator()
        intV.setRange(0,9999)
        #intV.fixup('0')
        self.setValidator(intV)
        self.setToolTip("到下个动作的间隔时间")
        self.setPlaceholderText('0-9999')

class noteLineEdit(myLineEdit):
    def __init__(self) -> None:
        super(noteLineEdit,self).__init__()
        self.setReadOnly(False)
        self.setToolTip('非必填，用于飞书消息告警提示')

class expectCombox(QComboBox):
    def __init__(self) -> None:
        super(expectCombox,self).__init__()
        self.addItems(expectDict)


class areaLineEdit(myLineEdit):
    def __init__(self):
        super(areaLineEdit,self).__init__()
        self.setReadOnly(False)
        self.setPlaceholderText('请输入坐标值')
        self.setToolTip('需要监控区域的左上/右下坐标，可通过"坐标获取"获得该参数值')
        # self.setPlaceholderText("")

class showCmdLineEdit(myLineEdit):
    def __init__(self):
        super(showCmdLineEdit,self).__init__()
        self.setReadOnly(False)

class expectStrLineEdit(myLineEdit):
    def __init__(self):
        super(expectStrLineEdit,self).__init__()
        self.setReadOnly(False)

class pictureLabel(QLabel):
    def __init__(self):
        super(pictureLabel,self).__init__()
        #self.setPixmap(QPixmap('textone.png'))
        self.setScaledContents(True)
        
class expectLineEdit(myLineEdit):
    def __init__(self):
        super(expectLineEdit,self).__init__()
        self.setReadOnly(False)
        intV = QIntValidator()
        intV.setRange(0,2147483647)
        self.setValidator(intV)
        self.setText('0')

class ocrResultLineEdit(myLineEdit):
    def __init__(self):
        super(ocrResultLineEdit,self).__init__()
        self.setReadOnly(True)
        self.setPlaceholderText('')

class areaPixMap(QPixmap):
    def __init__(self,fn):
        super(areaPixMap,self).__init__()
        #self.scaholder

class actTimesSpinBox(QSpinBox):
    def __init__(self):
        super(actTimesSpinBox,self).__init__()
        self.setMinimum(1)
        self.setValue(1)
        #self.scaholder

class ucmpComboBox(QComboBox):
    def __init__(self):
        super(ucmpComboBox,self).__init__()
        self.addItems(ucmpDict)

class percentageSpinBox(QDoubleSpinBox):
    def  __init__(self):
        super(percentageSpinBox,self).__init__()
        self.setMinimum(0.0)
        self.setMaximum(100.0)


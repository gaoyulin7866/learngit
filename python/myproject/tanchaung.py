# -*- coding:utf-8 -*-
from tkinter import *
import tkinter
# 建立一个对话框
import tkinter.simpledialog as dl
# 建立一个信息展示框
import tkinter.messagebox as mb
import tkinter as tk
import random

# 创建控件
top = tkinter.Tk()
#设置窗口的大小宽x高+偏移量
top.geometry('500x300+500+200')
#设置窗口标题
top.title('爬虫程序')
# ---------------
l = tkinter.Label(top, text="This is Label")

l.pack()
# 文本对话框
mb.showinfo("MessageBox-Title", "Hello MessageBox")

number = random.randrange(1, 100)
print(number)

while True:
    # 输入对话框
    input_number = dl.askinteger("SimpleDialog-Title", "Input Number")

    if input_number == number:
        output_dialog = "Right"
        mb.showinfo("massage", output_dialog)
        break
    elif input_number < number:
        output_dialog = "< Number"
        mb.showinfo("massage<", output_dialog)
    else:
        output_dialog = "Error"
        mb.showinfo("Error", output_dialog)


        # listbox列表框控件
# --------------
# a = ['2222','3333']
# b = ['4444','5555']
#
# listb = tkinter.Listbox(top)
# listb2 = tkinter.Listbox(top)
#
# for item in a:
#     listb.insert(0,item)
#
# for item in b:
#     listb2.insert(0,item)
#
# listb.pack() #将控件放置在主窗口中
# listb2.pack()
# ---------------------

# 进入消息循环
# top.mainloop()



# master


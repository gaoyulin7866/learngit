# -*- coding:utf-8 -*-
import socket
import string
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
# 建立连接:
# try:
#     s.connect(('127.0.0.1', 9999))
#     # 接收欢迎消息:
#     print(s.recv(1024).decode('utf-8'))
#     for data in [b'Michael', b'Tracy', b'Sarah']:
#         # 发送数据:
#         s.send(data)
#         print(data)
#         print(s.recv(1024).decode('utf-8'))
#     s.send(b'exit')
#     s.close()
# except:
#     print('链接失败')
# finally:
#     print('END')

s.connect(('127.0.0.1', 9999))
# 接收欢迎消息:
print(s.recv(1024).decode('utf-8'))
while True:
    data = input('>>')
    if not data == 'exit':
        s.send(data)
        print(s.recv(1024).decode('utf-8'))
    else:
        break
s.send(b'exit')
s.close()

#从命令行输入多行
# stopword = ''
#     str = ''
#     for line in iter(input, stopword):
#         str += line + '\n'
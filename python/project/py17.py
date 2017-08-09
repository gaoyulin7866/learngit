# -*- coding:utf-8 -*-
import os,pickle
# print(os.name)
# print(os.uname())
# print(os.environ)
# print(os.path.abspath('.'))
# os.listdir('.')#中的 . 意思是当前目录
list =[[x] for x in os.listdir('.') if os.path.isfile(x) and os.path.splitext(x)[1]=='.py']#os.path.isfile(x) 如果x是文件名返回true 否则返回false
print(list)

# d ={'name':'bob','age':'23','score':'88'}

# a = pickle.dumps(d)#序列化成bytes
# print(a)

# f = open('../text2.txt','wb')
# pickle.dump(d,f)#序列化成bytes存到f中
# f.close()
#
# f = open('../text2.txt','rb')
# d = pickle.load(f)#反序列化bytes 输出
# f.close()
# print(d)
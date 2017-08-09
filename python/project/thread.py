# -*- coding:utf-8 -*-
import threading #线程
from time import ctime,sleep#单独使用ctime和sleep
import time

# def sayhi(num):
# 	print("running on number: %s" % num)
# 	time.sleep(3)
#
# if __name__ == '__main__':
# 	t1 = threading.Thread(target=sayhi,args=(1,))
# 	t2 = threading.Thread(target=sayhi,args=(2,))
#
# 	t1.start()
# 	t2.start()
#
# 	print(t1.getName())#getName() 获取线程名
# 	print(t2.getName())#setName() 设置线程名
#######################################################
# def listen(name):
# 	print("beijing listening to %s.%s" % (name,ctime()))
# 	sleep(3)
# 	print("end listening %s" % ctime())
#
# def recor(title):
# 	print("begin recording the %s! %s" % (title,ctime()))
# 	sleep(5)
# 	print("end recor %s" % ctime())
#
# threads=[]
# t1 = threading.Thread(target=listen,args=('水手',))
# t2 = threading.Thread(target=recor,args=('python线程',))
# threads.append(t1)
# threads.append(t2)
#
# if __name__ == '__main__':
# 	for t in threads:
# 		t.start()
#
# 	print("all over %s" % ctime())
#######################################################设置两个子线程守护线程 跟着主线程一起退出（不管子线程是否完成 都会退出 结束程序）
# def listen(name):
# 	print("beijing listening to %s.%s" % (name,ctime()))
# 	sleep(3)
# 	print("end listening %s" % ctime())
#
# def recor(title):
# 	print("begin recording the %s! %s" % (title,ctime()))
# 	sleep(5)
# 	print("end recor %s" % ctime())
#
# threads=[]
# t1 = threading.Thread(target=listen,args=('水手',))
# t2 = threading.Thread(target=recor,args=('python线程',))
# threads.append(t1)
# threads.append(t2)
#
# if __name__ == '__main__':
# 	for t in threads:
# 		t.setDaemon(True)#设置为后台线程（如果不设 默认为前台线程false）
# 		t.start()
#
# 	print("all over %s" % ctime())
#######################################################只设置t1为守护线程（无意义  因为t2还在运行  程序不会结束# ）
def listen(name):
	print("beijing listening to %s.%s" % (name,ctime()))
	sleep(3)
	print("end listening %s" % ctime())

def recor(title):
	print("begin recording the %s! %s" % (title,ctime()))
	sleep(5)
	print("end recor %s" % ctime())

threads=[]
t1 = threading.Thread(target=listen,args=('水手',))
t2 = threading.Thread(target=recor,args=('python线程',))
threads.append(t1)
threads.append(t2)

if __name__ == '__main__':

	t2.setDaemon(True)

	for t in threads:
		t.start()

	print("all over %s" % ctime())
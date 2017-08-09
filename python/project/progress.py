# -*- coding:utf-8 -*-

import threading #线程

import time
# def hi(num):
# 	print("hello %s" % num)
# 	time.sleep(3)#t1 t2 两个线程运行结束后 停顿三秒结束
#
# if __name__=='__main__':
# 	t1 = threading.Thread(target=hi,args=(10,))#创建线程对象t1 参数是10
# 	t1.start()
# 	t2 = threading.Thread(target=hi, args=(9,))  # 创建线程对象t2 参数是9
# 	t2.start()
#
# 	print("ending.......")#主线程输出 主线程结束 但是子线程还在运行
#######################################################
# def music():
# 	print("begin to listen %s" % time.ctime())#先打印
# 	time.sleep(3)
# 	print("stop to listen %s" % time.ctime())#等三秒打印
#
# def game():
# 	print("begin to play game %s" % time.ctime())#先打印
# 	time.sleep(5)
# 	print("stop to play game %s" % time.ctime())#等两秒打印
#
# if __name__ == '__main__':
# 	t1 = threading.Thread(target=music)
# 	t1.start()
# 	t2 = threading.Thread(target=game)
# 	t2.start()
# 	print("ending")#主线程输出 主线程结束 但是子线程还在运行
#######################################################
# def music():
# 	print("begin to listen %s" % time.ctime())
# 	time.sleep(3)
# 	print("stop to listen %s" % time.ctime())
#
# def game():
# 	print("begin to play game %s" % time.ctime())
# 	time.sleep(5)
# 	print("stop to plat game %s" % time.ctime())
#
# if __name__ == '__main__':
# 	t1 = threading.Thread(target=music)
# 	t2 = threading.Thread(target=game)
#
# 	t1.start()
# 	t2.start()
#
# 	t1.join()#子线程结束之前主线程一直被阻塞
# 	t2.join()#子线程结束之前主线程一直被阻塞
#
# 	print("ending")#在主线程中 由于被阻塞 所以最后输出
#######################################################
# def music():
# 	print("begin to listen %s" % time.ctime())
# 	time.sleep(3)
# 	print("stop to listen %s" % time.ctime())
#
# def game():
# 	print("begin to play game %s" % time.ctime())
# 	time.sleep(5)
# 	print("stop to paly game %s" % time.ctime())
#
# if __name__ == '__main__':
# 	t1 = threading.Thread(target=music)
# 	t2 = threading.Thread(target=game)
#
# 	t1.start()
# 	t2.start()
#
# 	t1.join()#t1线程不结束，谁都不往下走
#
# 	print("ending")#由于线程一的阻塞  主进程不会立即结束  而是当线程一结束时 主线程随即结束 而第二个子线程仍在运行
#######################################################
def music():
	print("begin to listen %s" % time.ctime())
	time.sleep(3)
	print("stop to listen %s" % time.ctime())

def game():
	print("begin to play game %s" % time.ctime())
	time.sleep(5)
	print("stop to paly game %s" % time.ctime())

if __name__ == '__main__':
	t1 = threading.Thread(target=music)
	t2 = threading.Thread(target=game)

	t1.start()
	t1.join()

	t2.start()
	t2.join()

	print("ending")#主线程中打印
# -*- coding:utf-8 -*-

import threading #线程
import time
lock=threading.Lock()
num = 100
l = []

def sub():
	global num
	# lock.acquire()  # 获取锁 使子线程能够按顺序进行   不会同时进行
	temp = num
	time.sleep(0.0001)
	num = temp-1
	# lock.release()  # 释放锁

for i in range(100):
	t = threading.Thread(target=sub)
	t.start()
	l.append(t)

for t in l:
	t.join()

print(num)
# -*- coding:utf-8 -*-
import threading,time

#同步条件
# class boss(threading.Thread):
# 	def run(self):
# 		print("boss:今晚都加班")
# 		print(event.isSet())#判断event对象是否设置完成
# 		time.sleep(10)
#
# 		event.set()#设置event
# 		time.sleep(10)
#
# 		print("boss:可以下班了")
# 		print(event.isSet())
# 		time.sleep(10)
#
# 		event.set()
# class worker(threading.Thread):
# 	def run(self):
#
# 		event.wait()#等待链接boss
# 		print("worker:no")
# 		event.clear()#清除event
# 		event.wait()
#
# 		print("worker:oh")
#
# if __name__ == '__main__':
# 	event = threading.Event()#线程间传递信号
# 	threads=[]
# 	threads.append(boss())
# 	# for i in range(5):
# 	threads.append(worker())
#
# 	for t in threads:
# 		t.start()
# 	for t in threads:
# 		t.join()
# 	print("ending")
#######################################################
class mythread(threading.Thread):
	def run(self):
		if semaphore.acquire():#-1
			print(self.name)
			time.sleep(5)
			semaphore.release()#+1

if __name__ == '__main__':
	semaphore = threading.Semaphore(5)#同时能有几个线程进去
	thrs = []
	for i in range(100):
		thrs.append(mythread())
	for t in thrs:
		t.start()
	print('ending')
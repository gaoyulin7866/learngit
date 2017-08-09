# -*- coding:utf-8 -*-

import multiprocessing
import time
import os

def worker_1(interval):
	print("worker1_pid %s worker1_uid %s:" % (os.getpid(),os.getuid()))
	time.sleep(interval)
	print("end worker %s" % interval)

def worker_2(interval):
	print("worker2_pid %s worker2_uid %s" % (os.getpid(),os.getuid()))
	time.sleep(interval)
	print("end worker %s" % interval)

def worker_3(interval):
	print("worker3_pid %s worker3_uid %s" % (os.getpid(),os.getuid()))
	time.sleep(interval)
	print("end worker %s" % interval)

if __name__ == '__main__':
	p1 = multiprocessing.Process(target=worker_1,args=(2,))
	p2 = multiprocessing.Process(target=worker_2, args=(3,))
	p3 = multiprocessing.Process(target=worker_3, args=(4,))

	p1.daemon = True
	p2.daemon = True
	p3.daemon = True

	p1.start()
	p2.start()
	p3.start()

	# p1.join()
	# p2.join()
	# p3.join()

print("ending")
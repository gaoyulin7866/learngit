# -*- coding:utf-8 -*-

def add(n):
	if n == 1:
		return 1
	else:
		return n * add(n-1)
sum = add(5)
print sum
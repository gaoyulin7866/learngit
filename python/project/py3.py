# -*- coding:utf-8 -*-


l = []
def add(sum):
	n = 1
	while n < sum:
		l.append(n)
		n += 2
add(100)

for a in l:
	print a,

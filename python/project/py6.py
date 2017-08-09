# -*- coding:utf-8 -*-

# l = [1,2,3,4,5,6,7]
#
# def ad(n):
# 	return n*n
# r = map(str,l)
# l2 = list(r)
# print l2

# def add(n,m):
# 	return n*m
# list = [1,2,3]
#
# sum = reduce(add,list)
# print sum

def compare(x,y):
	if x > y:
		return x
	else:
		return y
l = [x for x in range(50)]

num = reduce(compare,l)
print (num)


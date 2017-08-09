# -*- coding:utf-8 -*-


l1 = [x for x in range(50)]

# def Del(n):
# 	return n % 2 ==0
# l2 = list(filter(Del,l1))
# print(l2)

# def compare(n):
# 	m = 20
# 	if n > m:
# 		return m
# l3 = list(filter(compare,l1))strip
# print(l3)

l4 = ['1',' 2',' 3 ','','4',None,'5']

def not_empty(n):
	return n and n.strip()

l5 = list(filter(not_empty,l4))

print(l5)


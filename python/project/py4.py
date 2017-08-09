# -*- coding:utf-8 -*-

# l = list(range(100))
# print l
#
# l2 = [x*x for x in range(50)]
# print l2
#
# l3 = [x*x for x in range(100) if x % 2 == 0]
# print l3
#
# l4 = [m+n for m in "asdfg" for n in "12345"]
# print l4

d = {'a':'1','b':'2','c':'3'}

for k,v in d.items():
	print (k,"=",v)

l5 = ['Hello', 'World', 'IBM', 'Apple']
l6 =[s.lower() for s in l5]
print (l6)


# -*- coding:utf-8 -*-

# l1 = [1,2,3,4,5,-5,10,-32,44,-10]
#
# l2 = sorted(l1,key=abs)
# print(l2)

# l3 = ['bffd','cdae','adf','hr','ada','Za']
# l4 = sorted(l3,key=str.lower,reverse=True)
# print(l4)

l5 = [('Bob', 75), ('Adam', 92), ('Bart', 66), ('Lisa', 88), ('adam', 98)]
# def name(item):
# 	return item[0].lower()
# l6 = list(sorted(l5,key=name,reverse=False))
# print(l6)

def score(item):
	return item[1]
l7 = list(sorted(l5,key=score))
print(l7)
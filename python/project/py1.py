# -*- coding:utf-8 -*-

list = [1,2,3,4,5]
def cla(*number):
	sum = 0
	for n in number:
		sum = sum + n * n
	return sum
a = cla(*list)
print (a)
dict = {'city':'xianggang','qita':'meile'}
def person(name,age,**kw):
	print ('name:',name,'age:',age,'other:',kw)
person('xiaoming',40)
person('xiaoming',40,city='xianggang',qita='meile')
person('xiaoming',40,**dict)
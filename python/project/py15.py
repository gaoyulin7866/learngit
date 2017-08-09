# -*- coding:utf-8 -*-

# class student(object):
# 	def __init__(self,name):
# 		self._name = name
# 	def __str__(self):
# 		return '名字是%s' % self._name
#
#
# s = student('xiaoming')
#
# print(s)
#
# class fib(object):
# 	def __init__(self):
# 		self.a,self.b=0,1
# 	def __iter__(self):#使类可以使用for in循环
# 		return self
# 	def __next__(self):
# 		self.a,self.b=self.b,self.a+self.b
# 		if self.a > 10000:
# 			raise StopIteration()
#
# 		return self.a
#
# for n in fib():
# 	print(n)
#
# class abc(object):
# 	def __getitem__(self, item):#使类可以像list一样通过索引值取数
# 		a,b=1,1
# 		for x in range(item):
# 			a,b=b,a+b
# 		return a
#
# f=abc()
# print(f[3])

class abv(object):
	def __getitem__(self, item):#使类可以像list一样通过索引值取数
		if isinstance(item,int):#判断是不是数字
			a,b=1,1
			for x in range(item):
				a,b=b,a+b
			return a
		if isinstance(item,slice):#判断是不是切片
			start = item.start
			stop = item.stop
			if start is None:
				start = 0
			a,b=1,1
			L=[]
			for x in range(stop):
				if x >= start:
					L.append(a)
				a,b=b,a+b
			return L

g = abv()
print(g[0:5])

class chain(object):
	def __init__(self,path=''):
		self._path = path
	def __getattr__(self, item):
		return chain('%s/%s' % (self._path,item))
	def __str__(self):
		return self._path
	__repr__=__str__
print( chain().status.user.timeline.list)

#错误代码处理

try:
	print("try...")
	r = 10/0
	print("result:",r)
except ZeroDivisionError as e:
	print("except:",e)
finally:
	print("finally...")
print("END")
print("**************")

try:
	print("try...")
	r = 10/2
	print("result:",r)
except ZeroDivisionError as e:
	print("except:",e)
else:
	print("没有错误")
finally:
	print("finally...")
print("END")

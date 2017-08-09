# -*- coding:utf-8 -*-
#装饰器

l = [1,2]

def log(fun):
	def wrapper(*argv,**kw):
		print("call %s" % (fun.__name__))
		return fun(*argv,**kw)
	return wrapper

@log
def new():
	print("2101-21-21")
new()


def new():
	print("2012-11-21")
new()

# -*- coding:utf-8 -*-

# def add(*argv):
# 	def sum():
# 		n = 0
# 		for x in argv:
# 			n +=x
# 		return n
# 	return sum
#
#
# f = add(1,2,3,4,5)
#
# print(f())

#返回函数

def count():
    def f(j):
        def g():
            return j*j
        return g
    fs = []
    for i in range(1, 4):
        fs.append(f(i)) # f(i)立刻被执行，因此i的当前值被传入f()
    return fs
f1,f2,f3 = count()
print(f1(),f2(),f3())
print(f1.__name__)#返回函数的名字
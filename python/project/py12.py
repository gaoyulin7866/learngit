# -*- coding:utf-8 -*-
import functools
#偏函数  函数参数过多时可以固定某些参数 只需要传需要改变的参数即可
# int2 = functools.partial(int,base=16)
# a = int2("44444")
# print(a)

int3 = functools.partial(max,10)
args = (1,2,3,4)
print(int3(*args))
# -*- coding:utf-8 -*-
#面向对象编程
class student(object):
	def __init__(self,name,score):
		self.__name=name
		self.__score=score

	def print_score(self):
		print("%s:%s" % (self.__name,self.__score))


# bart = student(59,'Bart Simpson')
# lisa = student(87,'Lisa Simpson')

# bart.print_score()
# lisa.print_score()

list = {'xiaoming':50,'xiaobai':60,'xiaohei':70}

for x,y in list.items():
	str1 = student (x,y)
	str1.print_score()
#print(str1.__name)无法打印出来

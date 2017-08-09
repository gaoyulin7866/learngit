# -*- coding:utf-8 -*-

class Student(object):

	@property
	def score(self):
			return self._score
	@score.setter
	def score(self,value):
			if not isinstance(value,int):
				raise ValueError("输入的值不正确")
			if value < 0 or value > 100:
				raise ValueError("分数不正确")
			self._score = value

s = Student()
s.score=60
a = s.score
print(a)


class Screen(object):
	@property
	def width(self):
		return self._wid
	@width.setter
	def width(self,value):
		self._wid = value

	@property#只读属性
	def resolution(self):
		return 1080 -self._wid





d = Screen()
d.width = 100

b = d.width
print(b)

print(d.resolution)

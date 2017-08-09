# -*- coding:utf-8 -*-

# with open('../text.txt','r') as f:
# 	# for line in f.readlines():
# 	# 	print(line.strip())
# 	print(f.read(10))

from io import StringIO
# f = StringIO()
# f.write('hello')
#print(f.getvalue())
f = StringIO('hello world')
while True:
	s = f.read(1)
	if s == '':
		continue
	print(s)
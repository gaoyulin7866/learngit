# -*- coding:utf-8 -*-
#https://www.taobao.com/

import re
import urllib.request

def gethtml(url):
	page = urllib.request.urlopen(url)
	html = page.read()
	html = html.decode('utf-8')
	return html

def gethref(html):
	k = re.split(r'\s+', html)
	sp = []
	for i in k:
		if (re.match(r'href="https:(.*?)',i)):
			i = i.split('>')[0]
			sp.append(i)
	return sp

# def openurl(sp):
# 	for it in sp:
# 		m = re.search(r'href="(.*?)"', it)
#
# 		iturl = m.group(1)
# 		if (iturl[6] != '/'):
# 			continue
# 		web = urllib.request.urlopen(iturl)
# 		itdata = web.read()

html = gethtml('https://www.taobao.com/')
sp = gethref(html)
print(sp)


# with open('../href.txt','w') as f:
# 	for n in sp:
# 		f.write(n+'\r\n')
# with open('../html.txt','w') as f:
# 	f.write('"'+html+'"')
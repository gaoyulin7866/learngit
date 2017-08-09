# -*- coding:utf-8 -*-
import re
import urllib
import urllib2
import sys
import time
import Queue
# import thread
import threading
import jieba
import chardet
from BeautifulSoup import BeautifulSoup as BS

DEEP = 1000
LOCK = threading.Lock()
PATH = "./"
urlQueue = Queue.Queue()


def pachong():
	url = 'http://www.baidu.com'
	return url


def getPageUrl(html):
	reUrl = re.compile(r'<\s*[Aa]{1}\s+[^>]*?[Hh][Rr][Ee][Ff]\s*=\s*[\"\']?([^>\"\']+)[\"\']?.*?>')
	urls = reUrl.findall(html)
	for url in urls:
		if len(url) > 10:
			if url.find('javascript') == -1:
				urlQueue.put(url)


def getContents(url):
	try:
		url = urllib2.quote(url.split('#')[0].encode('utf-8'), safe="%/:=&?~#+!$,;'@()*[]")
		req = urllib2.urlopen(url)
		res = req.read()
		code = chardet.detect(res)['encoding']
		# print
		# print code
		res = res.decode(str(code), 'ignore')
		res = res.encode('utf-8', 'ignore')
		code = chardet.detect(res)['encoding']
		# print code
		# print res
		return res
	except urllib2.HTTPError, e:
		print e.code
		return None
	except urllib2.URLError, e:
		print str(e)
		return None


def writeToFile(html, url):
	fp = file(PATH + str(time.time()) + '.html', 'w')
	fp.write(html)
	fp.close()


def getKeyWords(html):
	code = chardet.detect(html)['encoding']
	if code == 'ISO-8859-2':
		html.decode('utf-8', 'ignore').encode('utf-8', 'ignore')
	code = chardet.detect(html)['encoding']
	soup = BS(html, fromEncoding="utf-8")
	titleTag = soup.title
	titleKeyWords = titleTag.contents[0]
	cutWords(titleKeyWords)


def cutWords(contents):
	print contents
	res = jieba.cut_for_search(contents)
	res = '\n'.join(res)
	print res
	res = res.encode('utf-8')
	keyWords = file(PATH + 'cutKeyWors.txt', 'a')
	keyWords.write(res)
	keyWords.close()


def start():
	while urlQueue.empty() == False:
		url = urlQueue.get()
		html = getContents(url)
		getPageUrl(html)
		getKeyWords(html)
		writeToFile(html, url)


if __name__ == '__main__':
	startUrl = pachong()
	urlQueue.put(startUrl)
	start()
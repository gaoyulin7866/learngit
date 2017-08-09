# -*- coding:utf-8 -*-
import urllib.request
import re

def gethtml(url):
    page = urllib.request.urlopen(url)
    html = page.read()
    html = html.decode('UTF-8')
    return html
#src and href
# def getimg(html):
#     k = re.split(r'\s+', html)
#     s = []
#     sp = []
#     for i in k:
#         if (re.match(r'src', i) or re.match(r'href', i)):
#             if (not re.match(r'href="#"', i)):
#                 if (re.match(r'.*?png"', i) or re.match(r'.*?ico"', i)):
#                     if (re.match(r'src', i)):
#                         s.append(i)
#
#     for it in s:
#         if (re.match(r'.*?png"', it)):
#             sp.append(it)
#     return sp

def getimg(html):
    k = re.split(r'\s+', html)
    sp = []
    for i in k:
        if (re.match(r'src', i)):
            if (re.match(r'.*?(png|jpg)"', i)):
                sp.append(i)
    return sp

def saveimg(sp):
    cnt = 0
    cou = 1
    for it in sp:
        m = re.search(r'src="(.*?)"',it)
        iturl = m.group(1)
        print(iturl)
        if (iturl[0]=='/'):
            continue
        web = urllib.request.urlopen(iturl)
        itdata = web.read()
        if (cnt%3==1 and cnt>=4 and cou<=30):
            f = open('../image/'+str(cou)+'.png',"wb")
            cou = cou+1
            f.write(itdata)
            f.close()
        cnt = cnt+1

html = gethtml("http://findicons.com/pack/2787/beautiful_flat_icons")
sp = getimg(html)
print(sp)
saveimg(sp)
# -*- coding:utf-8 -*-

#需要2。7版本的运行
import json
from PIL import ImageFilter,Image, ImageDraw, ImageFont
import random

# d = dict(name='bob',age=33,score=44)
#
# a = json.dumps(d)
# print(a)

#处理图片
# im = Image.open('pic.jpg')
# # 获得图像尺寸:
# w,h=im.size
# print('Original image size: %sx%s' % (w, h))
# # 缩放到50%:
# im.thumbnail((w//2, h//2))
# print('Resize image to: %sx%s' % (w//2, h//2))
# im.save('pic2.jpg', 'jpeg')
#
# im = Image.open('pic.jpg')
# # 应用模糊滤镜:
# im2 = im.filter(ImageFilter.BLUR)
# im2.save('pic3.jpg', 'jpeg')

#生成随机验证码   字母
def rndchar():
	return chr(random.randint(65,90))
def rndcollor():
	return (random.randint(64,255),random.randint(64,255),random.randint(64,255))
def rndcollor2():
	return (random.randint(32,127),random.randint(32,127),random.randint(32,127))
width = 60*4
height = 60
image = Image.new('RGB',(width,height),(255,255,255))
font = ImageFont.truetype('Arial.ttf',36)
draw = ImageDraw.Draw(image)
for x in range(width):
	for y in range(height):
		draw.point((x,y),fill=rndcollor())

for t in range(4):
	draw.text((60*t+10,10),rndchar(),font=font,fill=rndcollor2())
image = image.filter(ImageFilter.BLUR)
image.save('code.jpg','jpeg')
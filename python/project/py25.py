# -*- coding:utf-8 -*-

from email import encoders
from email.header import Header
from email.mime.text import MIMEText
from email.mime.multipart import MIMEMultipart
from email.utils import parseaddr, formataddr
from email.mime.base import MIMEBase
import smtplib

def _format_addr(s):
    name, addr = parseaddr(s)
    return formataddr((Header(name, 'utf-8').encode(), addr))

from_addr = input('From: ')
password = input('Password: ')
to_addr = input('To: ')
smtp_server = input('SMTP server: ')# smtp.icoremail.net 	smtp.qq.com端口465 587
# 邮件对象:
# msg=MIMEMultipart()#发送单一的文本或html
msg=MIMEMultipart('alternative')#当内容即包含html和文本时使用这个参数   目前未成功
msg['From'] = _format_addr('Python爱好者 <%s>' % from_addr)
msg['To'] = _format_addr('管理员 <%s>' % to_addr)
msg['Subject'] = Header('来自SMTP的问候……', 'utf-8').encode()


# 邮件正文是MIMEText:
msg.attach(MIMEText('haha','plain','utf-8'))#图片在附件中
# msg.attach(MIMEText('<html><body><h1>Hello</h1>' +
#     '<p><img src="cid:0"></p>' +
#     '</body></html>', 'html', 'utf-8'))#图片在正文中
msg.attach(MIMEText('<html><body><a href="https://www.baidu.com/">Hello</a></body></html>', 'html', 'utf-8'))

# 添加附件就是加上一个MIMEBase，从本地读取一个图片:
with open('pic.jpg','rb') as f:
 #设置附件的文件名
 mime = MIMEBase('image','jpg',filename='pic.jpg')
 #加上必要的头信息
 mime.add_header('Content-Disposition', 'attachment', filename='pic.jpg')
 mime.add_header('Content-ID','<0>')
 mime.add_header('X-Attachment-Id', '0')
 #把附件的内容读进来
 mime.set_payload(f.read())
 #用base64编码
 encoders.encode_base64(mime)
 #添加到邮件对象
 msg.attach(mime)
server = smtplib.SMTP(smtp_server,25)# SMTP协议默认端口是25
server.set_debuglevel(1)
server.login(from_addr,password)
server.sendmail(from_addr,[to_addr],msg.as_string())
server.quit()
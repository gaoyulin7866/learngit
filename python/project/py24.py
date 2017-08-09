# -*- coding:utf-8 -*-

from email import encoders
from email.header import Header
from email.mime.text import MIMEText
from email.utils import parseaddr, formataddr
import smtplib

def _fromat_addr(s):
	name,addr=parseaddr(s)
	return formataddr((Header(name,'utf-8').encode(),addr))

#自己的邮件
from_addr=str(input('from:'))
password=input('password:')
#对方的邮件
to_addr=str(input('to:'))
#服务器地址
smtp_server=input('发送者SMTP server:')# smtp.icoremail.net 	smtp.qq.com端口465 587

# msg = MIMEText('hahaha','plain','utf-8')# 正文 邮件格式（纯文本）  编码格式
msg = MIMEText('<html><body><h1>Hello</h1><p>send by <a href="https://www.baidu.com">Python</a>...</p></body></html>','html','utf-8')# 正文 邮件格式（html）  编码格式
msg['From'] = _fromat_addr('Python爱好者 <%s>' % from_addr)
msg['To'] = _fromat_addr('管理员 <%s>' % to_addr)
msg['Subject'] = Header('来自SMTP的问候……', 'utf-8').encode()

server = smtplib.SMTP(smtp_server,25)# SMTP协议默认端口是25
server.set_debuglevel(1)
server.login(from_addr,password)
server.sendmail(from_addr,[to_addr],msg.as_string())
server.quit()
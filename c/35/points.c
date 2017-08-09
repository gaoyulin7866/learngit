#include <stdio.h>
#include<stdlib.h>
#include<string.h>

struct name{
	long a;
}name;

struct pass{
	char b[20];
	char b2[20];
}pass;

int check(){
	int t = 0;
	int num;
	char *p1,*p2;
	p1 = pass.b;
	p2 = pass.b2;
	// num = strcmp(pass.b,pass.b2);
	num = strcmp(p1,p2);
	if( num == 0 ){
		printf("注册成功!");
		t = 1;
	}else{
		int t2;
		printf("您两次输入的密码不一致,请重新输入:\n");
		printf("请输入密码:");
		scanf("%s",pass.b);
		printf("请再次输入密码:");
		scanf("%s",pass.b2);
		t2 = check();
		if(t2 == 1){
			t = 1;
		}
	}

	return t;
}

int login(){
	long a2; 
	char b2[20];
	char *p3,*p4;
	printf("请输入账号:");
	scanf("%ld",&a2);
	printf("请输入密码:");
	scanf("%s",b2);
	p3 = b2;
	p4 = pass.b;
	int num = strcmp(p3,p4);
	if( a2 == name.a){
		if( num == 0 ){
			printf("登陆成功");
		}else{
			printf("密码输入不正确,");
			login();
		}
	}else{
		printf("账号输入不正确,");
		login();
	}

	return 0;
}

int main(){
	int T;
	printf("注册账号\n");
	printf("请输入账号:");
	scanf("%ld",&name.a);
	printf("请输入密码:");
	scanf("%s",pass.b);
	printf("再一次输入密码:");
	scanf("%s",pass.b2);
	T = check();
	if( T == 1 ){
		printf("登陆\n");
		login();
	}

	return 0;
}









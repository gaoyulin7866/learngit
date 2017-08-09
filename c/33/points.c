#include <stdio.h>
#include <stdlib.h>

char pass2[80];
long z;

int zhanghao(){
	int a;
	printf("请输入账号:");
	scanf("%d",&a);

	return a;
}

int mima(){
	int b;
	printf("请输入密码:");
	scanf("%d",&b);
	return b;
}

void fun2(k){
	int pass = 123456;
	char i[80];
	if( (int)k == pass ){
		printf("登陆成功");
	}else if( k == pass2 ){
		printf("登陆成功");
	}else{
		printf("密码不正确,请重新输入:");
		scanf("%c",i);
		fun2(i);
	}
}

void fun(l){
	int num = 767098471;
	int n,j;
	char n2[80];
	if( l == num){
		printf("输入正确,");
		n = mima();
		fun2(n);
	}else if(l == z){
		printf("输入正确,请输入密码:");
		scanf("%s",n2);
		fun2(n2);
	}else{
		printf("账号不正确，请重新输入:");
		scanf("%d",&j);
		fun(j);
	}
}

int main(){
	int m;
	char arr[2] = {'Y','N'},s;
	
	printf("是否已有账号？\n");
	printf("如果已有账号，请输入'Y'\n");
	printf("如果没有账号，请输入'N'\n");
	printf("请输入:");
	scanf("%c",&s);
	if( s == arr[0] ){
		m = zhanghao();
		fun(m);
	}
	if( s == arr[1] ){
		long num_m;
		printf("请输入账号:");
		scanf("%ld",&z);
		printf("请输入密码:");
		scanf("%s",pass2);

		printf("恭喜你,注册成功\n");
		printf("登陆\n");
		num_m = zhanghao();
		fun(num_m);
	}

	return 0;
}
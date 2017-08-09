#include <stdio.h>

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
	int i;
	if( k == pass || i == pass){
		printf("登陆成功");
	}else {
		printf("密码不正确,请重新输入:");
		scanf("%d",&i);
		fun2(i);
	}
}

void fun(l){
	int num = 767098471;
	int n,j;
	if( l == num ){
		printf("输入正确,");
		n = mima();
		fun2(n);
	}else{
		printf("账号不正确，请重新输入:");
		scanf("%d",&j);
		fun(j);
	}
}

int main(){
	int m;
	m = zhanghao();
	fun(m);

	return 0;
}
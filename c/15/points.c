#include <stdio.h>

int main(){
	int a,b,c,t;
	printf("输入三个不同的整数");
	scanf("%d,%d,%d",&a,&b,&c);
	if( a > b ){
		t = b;
		b = a;
		a = t;
	}
	if( a > c){
		t = c;
		c = a;
		a = t;
	}
	if( b > c){
		t = c;
		c = b;
		b = t;
	}
	printf("%d,%d,%d\n", a,b,c);

	return 0;

}
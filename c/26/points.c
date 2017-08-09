#include <stdio.h>

int main(){
	int *p1,*p2,*p,a,b;
	printf("请输入两个整数");
	scanf("%d,%d",&a,&b);
	p1 = &a;
	p2 = &b;
	printf("%p,%p\n", p1,p2);
	if(a<b){
		p = p1;
		p1 = p2;
		p2 = p;
	}
	printf("a = %d,b = %d\n",a,b);
	printf("%p,%p\n", p1,p2);
	printf("max = %d,min = %d\n",*p1,*p2);
	
	return 0;
}
#include <stdio.h>

void sort(int *m,int *n){
	int temp;
	printf("m = %p,n = %p\n", m,n);
	temp = *m;
	*m = *n;
	*n = temp;
	// printf("m = %d,n = %d\n", *m,*n);
	// printf("m = %p,n = %p\n", m,n);
}

int main(){
	int a,b;
	int *p1,*p2;
	printf("输入两个整数");
	scanf("%d,%d",&a,&b);
	p1 = &a;
	p2 = &b;

	if(a < b){
		sort(p1,p2);
	}

	printf("max = %d,min = %d\n", *p1,*p2);

	return 0;
}
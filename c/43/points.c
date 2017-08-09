#include <stdio.h>

int main(){

	int i = 5;
	int *p;
	int **p1;

	p = &i;

	p1 = &p;

	printf("i=%d\n", i);
	printf("*p=%d\n", *p);
	printf("p=%p\n", p);
	printf("&p=%p\n", &p);
	printf("**p1=%d\n",**p1);
	printf("p1=%p\n", p1);


	return 0;
}
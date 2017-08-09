#include <stdio.h>

int main(){
	int arr[4] = {1,2,3,4};
	int *p1,*p2;
	p1 = &arr[0];
	p2 = arr;

	printf("p1 = %d,p2 = %d\n",*(p1+1),*(p2+1));//+1加的是数组中每个元素占用的字节数

	return 0;
}
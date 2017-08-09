#include <stdio.h>

int main(){
	char c1,c2;
	printf("输入一个大写字母");
	scanf("%c",&c1);
	c2 = c1 + 32;
	printf("%d\n", c1);
	printf("%d\n", c2);
	printf("%c\n", c2);

	return 0;
}
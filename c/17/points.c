#include <stdio.h>

int main(){
	char c1;
	printf("输入一个字母");
	scanf("%c",&c1);
	c1 = (c1 >= 'a' && c1 <= 'z') ? (c1 - 32):c1;
	putchar(c1);

	return 0;
}
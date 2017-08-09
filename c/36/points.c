#include <stdio.h>
#include <string.h>

int main(){

	char str[10];
	char str2[10];
	char *p1 = "addfsfs";
	printf("请输入字符串:");
	scanf("%s",str);
	printf("%s\n", str);
	printf("%s\n", p1);
	p1 = str;
	printf("%s\n", p1);


	return 0;
}
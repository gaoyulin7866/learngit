#include <stdio.h>

int main(){
	char *b = "daaaaac";
	char a = '2';
	char *p = &a;
	printf("%s\n", b);
	printf("%p\n", p);
	printf("%c\n", *p);
	return 0;
}
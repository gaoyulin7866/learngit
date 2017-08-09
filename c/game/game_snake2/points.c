#include <stdio.h>

void my_print(char *p);

int main(){

	int num = 1;
	char str[10] = "hello";
	int *p_num;
	char *p_str;
	char *p=str + 2;


int i, j;
	char *s = "123 445";
	sscanf(s, "%d %d",&i,&j)

	p_num = &num;
	p_str = str;
	printf("%c\n", *p);
	printf("num:%d\n", *p_num);
	printf("str:%x\n", p_str);
	printf("str:%s\n", p_str);

	my_print(str);
	my_print(p);

	return 0;
}

void my_print(char *p) {
	for(; *p != '\0';p++) {
		printf("%c", *p);
	}
	printf("\n");
}
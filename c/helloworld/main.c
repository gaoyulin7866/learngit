#include <stdio.h>
#include <stdlib.h>


int main()
{
	//int a = 5;

	// printf("a = %d\n", a);

	// int *p = &a;

	// printf("p = %d\n", p);
	// printf("*p = %d\n", *p);

	// int **pp = &p;
	// printf("pp = %d\n", pp);

	// printf("*pp = %d\n", *pp);
	// printf("**pp = %d\n", **pp);

	char str[32];

	str[0] = 'H';
	str[1] = 'e';
	str[2] = 'l';
	str[3] = 'l';
	str[4] = 'o';
	str[5] = 0;
	str[7] = 'W';
	str[8] = 'o';
	str[9] = 'r';

	char *p = str;
	printf("%s\n",p);
	printf("%c\n",*p);

	while (*p != 0) {
		printf("%c", *p);
		p = p + 1;
	}

	


	//printf("%s\n", str);

	// strcpy(str, "Hello World");

	// printf("%s\n", str);
	// int len = strlen(str);
	// printf("%d\n", len);




	return 0;
}
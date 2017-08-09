# include <stdio.h>

int main(){

	// char a[] = "a student",b[20];
	// int i;
	// for(i = 0; *(a+i)!='\0'; i++){
	// 	*(b+i) = *(a+i);
	// }
	// *(b+i) = '\0';

	// printf("a:%s\n", a);
	// printf("b:");
	// for(int j = 0; b[j]!='\0'; j++){
	// 	printf("%c", b[j]);
	// }

	// printf("\n");

	// printf("b:%s\n", b);


	char a[] = "a student",b[20];
	char *p1,*p2;
	p1 = a;
	p2 = b;
	for(; *p1!='\0'; p1++, p2++){
		*p2 = *p1;
	}
	*p2 = '\0';

	printf("a:%s\n", a);
	printf("b:%s\n", b);

	p1 = a;
	p2 = b;

	printf("a:%s\n", p1);
	printf("b:%s\n", p2);

	return 0;
}







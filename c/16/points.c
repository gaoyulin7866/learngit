#include <stdio.h>
#include <stdbool.h>
int main(){
	float c;
	printf("输入一个整数");
	scanf("%f",&c);
	bool a,b;
	a = c >= 60;
	b = c<= 69;
	if(a == true && b == true){
		printf("This grade is C\n");
	}
	printf("%d\n",a);
	printf("%d\n",b);

	return 0;
}
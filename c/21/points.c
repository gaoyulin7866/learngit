#include <stdio.h>

int print_star(){
	printf("****************\n");

	return 0;
}

int print_msg(){
	printf("How do you do!\n");
	return 0;
}

// void print_star(){//此函数没有类型，函数执行结束后不会把任何值带回main函数
// 	printf("****************\n");
// }

// void print_msg(){
// 	printf("How do you do!\n");
// }
//void 声明的函数可以在任意地方加return，表示函数结束并返回，如果不加return，则默认会在末尾 } 处结束执行函数；int声明的函数必须在末尾加return 0，作为函数的执行结束。
int main(){
	print_star();
	print_msg();
	print_star();

	return 0;
}
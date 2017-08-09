#include <stdio.h>
// int main(){
// 	int a,b,s;
// 	printf("输入两个整数\n");
// 	scanf("a = %d,b = %d",&a,&b);
// 	s = a + b;
// 	printf("s = %d\n", s);

// 	return 0;
// }
int main(void)

{
	int a = 3222;
	int *p = &a;

    char *str = "ABCDEFGHIJKL";
    int *pInt = (int*)str;
    //printf("%c\n", *str);
    //printf("%c\n", *pInt);
    //printf("%s\n", str);
    printf("%p\n", pInt);

    //printf("%c\n%c\n",*str,*(char *)pInt);
    // printf("%c\n%c\n",*(str+1),*(char *)(pInt+1));


    // printf("%p\n", p);
    // printf("%d\n", *p);

    return 0;
}/********
时间:2017-8-3
作者:gaoyulin
********//********
时间:2017-8-3
作者:gaoyulin
********/
#include <stdio.h>
int main()
{
	int mark;
	char grade;
	printf("请输入分数:");
	scanf("%d",&mark);
	grade = ( mark >= 90)?'A':((mark >= 60)?'B':'C');
	printf("%c\n",grade);
	return 0;
}
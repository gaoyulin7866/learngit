#include <stdio.h>
#include <stdlib.h>
typedef struct{
	int ID;
	int math;
	int English;
	int C;
	int avatgrade;
	char name[20];		
}Stu;
int main(){

	FILE*fp;

	Stu stu[5];
	int i,avatgrade = 0;
	printf("请输入五个学生的信息 学生号 姓名 三门成绩\n");
	for(i = 0; i < 5; i++){
		scanf("%d%s%d%d%d",&(stu[i].ID),stu[i].name,&(stu[i].math),&(stu[i].English),&(stu[i].C));
		stu[i].avatgrade = (stu[i].math + stu[i].English + stu[i].C)/3;
	}
	if((fp=fopen("stud","w"))==NULL){
		printf("不能打开文件\n");
		exit(0);
	}
	for(i = 0; i < 5; i++){
		fprintf(fp, "%d %s %d %d %d %d\n",stu[i].ID,stu[i].name,stu[i].math,stu[i].English,stu[i].C,stu[i].avatgrade);
	}
	fclose(fp);
	return 0;
}
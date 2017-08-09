#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <dirent.h>

int main(){
	FILE *fp;
	char add[] = "/********\n时间:2017-8-3\n作者:gaoyulin\n********/\n";
	char *ar;
	int size = 0;

	fp = fopen("../1/points.c","r+");
	if( fp == 0 ){
		printf("打开文件1失败。\n");
		return 0;
	}

	fseek(fp, 0, SEEK_END);
	size = ftell(fp); 
	fseek (fp, 0, SEEK_SET);
	ar = (char*)malloc(sizeof(char)*size);
	fread(ar,size,1,fp);
	fclose(fp);

	fp = fopen("../1/points.c","w+");

	fwrite(add,strlen(add),1,fp);
	fseek(fp,0,SEEK_END);
	fwrite(ar,strlen(ar),1,fp);
	free(ar);
	fclose(fp);

	return 0;

}






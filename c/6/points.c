#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	// FILE*fa;
	// fa = fopen("b.txt","w+");
	// fprintf(fa, "456\n");
	// fclose(fa);
	FILE*fa,*fb,*fc;
	int i,j,k;
	char str[100],str1[100];
	char tem;
	if((fa=fopen("./a.txt","r"))==NULL){
		printf("a不能打开此文件\n");
		exit(0);
	}	
	fgets(str,99,fa);
	fclose(fa);
	if((fb=fopen("./b.txt","r"))==NULL){
		printf("b不能打开此文件\n");
		exit(0);
	}
	fgets(str1,100,fb);
	fclose(fb);
	strcat(str,str1);
	for(i=strlen(str)-1; i>1; i--){
		for(j=0;j<i;j++){
			if(str[j]>str[j+1]){
				tem = str[j];
				str[j]=str[j+1];
				str[j+1]=tem;
			}
		}
	}
	if((fc=fopen("./c.txt","w"))==NULL){
		printf("不能打开此文件\n");
		exit(0);
	}
	fputs(str,fc);
	fclose(fc);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(){

	// FILE *fp,*fp2;
	// char ch,filename[10];
	// printf("请输入复制到所指定的文件名:");
	// scanf("%s",filename);
	// if((fp = fopen(filename,"w+")) == NULL ){
	// 	printf("文件无法打开\n");
	// 	exit(0);
	// }
	// if((fp2 = fopen(text.txt,"w+")) == NULL ){
	// 	printf("文件无法打开\n");
	// 	exit(0);
	// }

	// while(!feof(fp2)){
	// 	ch = fgetc(fp2);
	// 	fputc(ch,fp);
	// 	putchar(ch);
	// }

	// putchar(10);//输出一个换行符
	// fclose(fp);
	// fclose(fp2);

	FILE *fp;
	char ch;
	if( (fp = fopen("./text.txt","r")) == NULL ){
		printf("文件无法打开\n");
		exit(0);
	}
	while( ch != EOF ){
		ch = fgetc(fp);
		putchar(ch);
	};
	fclose(fp);

	return 0;
}
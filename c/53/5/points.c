#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    DIR    *dir;
    struct    dirent    *ptr;
    dir = opendir("../");
    char add[] = "/********\n时间:2017-8-3\n作者:gaoyulin\n********/\n";
    
    while((ptr = readdir(dir)) != NULL){
        FILE *fp;
        char *ar;
        char str1[30] = "../";
        char str2[20] = "/points.c";
        int size = 0;
        strcat(str1,ptr->d_name);
        strcat(str1,str2);

        fp = fopen(str1,"r+");
        if( fp == 0 ){
            printf("打开文件失败。\n");
            continue;
        }

        fseek(fp, 0, SEEK_END);
        size = ftell(fp); 
        fseek (fp, 0, SEEK_SET);
        ar = (char*)malloc(sizeof(char)*size);
        fread(ar,size,1,fp);
        fclose(fp);

        fp = fopen(str1,"w+");

        fwrite(add,strlen(add),1,fp);
        fseek(fp,0,SEEK_END);
        fwrite(ar,strlen(ar),1,fp);
        free(ar);
        fclose(fp);

        setbuf(stdin, NULL);
    }

    closedir(dir);


    
    DIR    *dir;
    struct    dirent    *ptr;
    dir = opendir("../");
    int num = 0;
    
    while((ptr = readdir(dir)) != NULL){
        num++;
        if( num > 3 ){
            FILE *fin,*ftp;
            char a[5000];
            char str1[30] = "../";
            char str2[20] = "/points.c";
            char str3[30] = "../";
            char str4[20] = "/tmp.c";
            int count = 0;

            strcat(str1,ptr->d_name);
            strcat(str1,str2);
            strcat(str3,ptr->d_name);
            strcat(str3,str4);
            
            fin=fopen(str1,"r");
            ftp=fopen(str3,"w");
            if(fin==NULL || ftp==NULL){
                printf("Open the file failure...\n");
                continue;
            }
            while(fgets(a,5000,fin)){
                count++;
                if(count > 4){
                    fputs(a,ftp);
                }
            }
            
            fclose(fin);
            fclose(ftp);
            remove(str1);
            rename(str3,str1);

            setbuf(stdin, NULL);
        }else {
            printf("d_name:%s\n", ptr->d_name);
        }
        
    }
    closedir(dir);

    return 0;
}








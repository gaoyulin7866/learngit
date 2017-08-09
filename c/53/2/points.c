# include <stdio.h>

void copy(char *p3,char *p4){

    while( (*p4 = *p3)!='\0' ){
        p3++,p4++;
    } 

}

int main(){
    char a[]="a student";
    char b[]="a teacher";
    char str[10] = "asd";

    char *p1,*p2,*p3;

    p1 = a;
    p2 = b;
    p3 = str;//p3 = "asdf" 常量不能再赋值改变
    printf("a:%s,b:%s\n", p1,p2);

    copy(p1,p2);

    printf("a:%s,b:%s\n", p1,p2);

    printf("%s\n", p3);
    printf("请输入指针p3所指向的内容:");
    scanf("%s",p3);
    printf("%s\n", p3);
    return 0;
}
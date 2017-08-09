#include <stdio.h>
#include <stdlib.h>

void check(int *p){
    int i;
    printf("不及格的是:");
    for(i = 0; i < 5; i++){
        if(*(p+i) < 60){//p[i]
            printf("%4d", *(p+i));//p[i]
        }
    }
    printf("\n");
}

int main(){

    int *p1,i;

    p1 = (int *)malloc(5*sizeof(int));//p1 = (int *)calloc(50,4) p1 = (int *)free(p) p1 = (int *)realloc(p,100)
    printf("请输入五个成绩:\n");
    for(i = 0; i < 5; i++){
        scanf("%d",p1+i);
    }

    check(p1);

    return 0;
}
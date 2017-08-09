#include <stdio.h>

float *search(float (*p)[4],int n){
    float *p2;
    p2 = *(p+n);//p2=(*p + n)两个相同  为什么？

    return p2;
}

int max(int x,int y){
    int max_num = y;
    if( x > y){
        max_num = x;
    }

    return max_num;
}

int main(){

    float score[][4] = {{60,50,80,90},{30,40,50,60},{30,60,80,30}};
    float *p1;
    int i,k,a,b,max_num;
    int (*point)(int a,int b);
    point = max;

    printf("请输入要查询的学生号(0-2):");
    scanf("%d",&k);
    printf("请输入两个整数:");
    scanf("%d,%d",&a,&b);
    printf("学生号是:%d\n", k);

    p1 = search(score,k);
    max_num = (*point)(a,b);

    for(i = 0; i < 4; i++){
        printf("%.2f\n", *(p1+i));
    }
    printf("max:%d\n", max_num);
    return 0;
}
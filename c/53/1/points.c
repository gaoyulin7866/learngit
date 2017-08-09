#include <stdio.h>
int max(int x, int y){
    int z;
    if(x > y){
        z = x;
    }else{
        z = y;
    }

    return z;
}
int main(){
    //int max(int x, int y);//如果max函数声明在main函数下面  需要在main中先声明一下max函数  不然main函数中调用Max函数时 不知道max函数是什么
    int a,b,c;
    printf("输入两个整数：");
    scanf("%d,%d",&a,&b);
    c = max(a,b);
    printf("最大值为:%d\n", c);

    return 0;
}
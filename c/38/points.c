#include <stdio.h>

struct student {
	int num;
	char name[10];

}stu[3]={{1,"liming"},{2,"lihua"},{3,"lifan"}};

// struct student {
// 	int num;
// 	char name[10];

// }stu={1,"liming"};

int main(){
	// struct student *p;
	// p = &stu;
	// printf("num:%d,name:%s\n",p->num,p->name);
	// printf("num:%d,name:%s\n",(*p).num,(*p).name);

	struct student *p;
	for( p = stu; p < stu + 3; p++){//stu 是结构体的首地址，p<stu+3 是每次循环时地址加1 
		printf("%2d,%20s\n",p->num,p->name);
	}

	for(int i = 0; i < 3; i++){
		printf("num:%d,name:%s\n",stu[i].num,stu[i].name);
	}

	return 0;

}
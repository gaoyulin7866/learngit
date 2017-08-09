/*
	File: potints.c
	Author: Gao Yulin
	Copyright 2017 ihangmei.com
*/

#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct student)

struct student {
	long num;
	float score;
	struct student *next;
};

int n;


struct student* creat(){
	struct student *head,*p1,*p2;
	n = 0;
	p1=p2=(struct student*)malloc(LEN);
	scanf("%ld,%f",&p1->num,&p2->score);//相当于scanf("%ld,%f",&p1->num,&p1->score) p1 p2 地址一样
	head = NULL;
	while( p1->num != 0){
		n = n+1;
		if( n == 1){
			head = p1;
		}else{
			p2->next = p1;
		}
		p2 = p1;
		p1 = (struct student*)malloc(LEN);
		scanf("%ld,%f",&p1->num,&p1->score);
	}

	p2->next = NULL;

	return head;
}

void print( struct student *head){
	struct student *p;
	printf("现在是%d个\n", n);
	p = head;
	if( head != NULL ){
		do{
			printf("num:%4ld,score:%5.1f\n",p->num,p->score);
			p = p->next;
		}while( p != NULL );
	}
}

int main(){
	struct student *head;
	head = creat();
	print(head);

	return 0;
}
#include <stdio.h>

struct student{

	int num;
	float score;
	struct student *next;
};

int main(){

	struct student a,b,c;
	struct student *head,*p;

	a.num = 1001; a.score = 66.6;
	b.num = 1002; b.score = 67.6;
	c.num = 1003; c.score = 68.6;

	head = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL;

	p = head;

	while( p != NULL ){
		printf("num:%3d,score:%3.1f\n", p->num,p->score);
		p= p->next;
	}


	return 0;
}
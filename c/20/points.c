#include <stdio.h>

int main(){
	int i,j;
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if((i==0 || i==4) && j!=2){
				printf(" ");
			}else if((i==0 || i==4) && j==2){
				printf("*");
			}
			if((i==1 || i==3) && j!=1 && j!=3){
				printf(" ");
			}else if((i==1 || i==3) && (j==1 || j==3)){
				printf("*");
			}
			if(i==2 && (j!=0 && j!=4)){
				printf(" ");
			}else if(i==2 && (j==0 || j==4)){
				printf("*");
			}
		}
		printf("\n");
	}

	return 0;
}
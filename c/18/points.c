#include <stdio.h>

int main(){
	int l = 0;
	for (int i = 100;i <= 200; i++){

		if(i%3 == 0){
			continue;
		}else if(i%3 != 0){
			l++;
			printf("%-5d", i);
			if( l%5 == 0){
				printf("\n");
			}
		}
	}

	return 0;
}
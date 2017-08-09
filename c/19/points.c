#include <stdio.h>

int main(){
	//int i,a[10];
	// for(i = 0; i < 10; i++){
	// 	a[i] = i;
	// }
	// for(i = 9; i >= 0; i--){
	// 	printf("%d\n", a[i]);
	// }
	int i,j;
	int a[2][3] ={{1,2,3},{4,5,6}};
	int b[3][2];
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			b[j][i] = a[i][j];
		}
	}
	for (i = 0; i < 3; i++){
		for(j = 0; j < 2; j++){
			printf("%2d", b[i][j]);
			if(j == 1){
				printf("\n");
			}
		}
	}
	return 0;
}
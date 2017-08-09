#include <stdio.h>

int max_value(int array[][4]){
	int max;
	max = array[0][0];

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 4; j++){
			max = (max > array[i][j]) ? max : array[i][j];
		}
	}

	return max;
}

int main(){
	int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,0,11,12}};
	int max;
	max = max_value(arr);
	printf("最大值为:%d\n", max);

	return 0;
}
#include <stdio.h>

float average(float array[]){
	int i;
	float aver,sum = array[0];
	for(i = 1; i < 4; i++){
		sum += array[i];
	}

	aver = sum / 4;

	return aver;

}

int main(){

	float score[4],aver;

	int i;
	printf("输入四个分数\n");
	for(i = 0; i < 4; i++){
		scanf("%f",&score[i]);
	}

	printf("\n");

	aver = average(score);

	printf("平均数:%.2f\n", aver);

	return 0;
}
#include <stdio.h>

int main(){
	int arr[10],m,n;
	printf("分别输入十个数");
	for(int i = 0; i < 10; i++){
		scanf("%d",&arr[i]);
	}
	m = arr[0];
	n = 1;
	for(int l = 1; l < 10; l++){
		m = (m > arr[l]) ? m:arr[l];
		n = (m > arr[l]) ? n:(l+1);
	}

	printf("最大值是m = %d,第%d个数\n", m,n);

	return 0;

}
#include <stdio.h>

char arr[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};

void drawing(char Arr[3][3]){

	printf("***********\n");
	printf(" %c | %c | %c \n",Arr[0][0],Arr[0][1],Arr[0][2]);
	printf("---+---+---\n");
	printf(" %c | %c | %c \n",Arr[1][0],Arr[1][1],Arr[1][2]);
	printf("---+---+---\n");
	printf(" %c | %c | %c \n",Arr[2][0],Arr[2][1],Arr[2][2]);
	printf("***********\n");

}

void begin(){
	int player,row, col;

	printf("请输入玩家名称:");
	scanf("%d",&player);
	if( player < 3 ){
		printf("请输入占据的位置(行，列):\n");
		scanf("%d,%d",&row,&col);
		if( (row < 3) && (col < 3) ){
			if( (arr[row][col] != 'O') && (arr[row][col] != 'X') ){
				arr[row][col] = (player == 1)? 'O':'X';
				drawing(arr);
			}else{
				printf("位置已被占据,请重新输入:\n");
				begin();
			}
		}else{
			printf("输入的位置不正确,请重新输入:\n");
			begin();
		}	
	}else{
		printf("玩家名错误,请重新输入:\n");
		begin();
	}
}

void check(char (*point)[3]){
	for(int i = 0; i < 3; i++){
		if ((point[i][0] == point[i][1]) && (point[i][1] == point[i][2])) {
			if( point[i][0] == 'O' ){
				printf("玩家1获胜!\n游戏结束。\n");
			}
			if( point[i][0] == 'X' ){
				printf("玩家2获1胜!\n游戏结束。\n");
			}
		}else if((point[0][i] == point[1][i]) && (point[1][i] == point[2][i])){
			if( point[0][i] == 'O' ){
				printf("玩家1获胜!\n游戏结束。\n");
			}
			if( point[0][i] == 'X' ){
				printf("玩家2获胜!\n游戏结束。\n");
			}
		}
	}
	if((point[0][0] == point[1][1]) && (point[1][1] == point[2][2])){
		if( point[0][0] == 'O'){
			printf("玩家1获胜!\n游戏结束。\n");
		}
		if( point[0][0] == 'X'){
			printf("玩家2获胜!\n游戏结束。\n");
		}
	}
	if((point[0][2] == point[1][1]) && (point[1][1] == point[2][0])){
		if(point[0][2] == 'O'){
			printf("玩家1获胜!\n游戏结束。\n");
		}
		if(point[0][2] == 'X'){
			printf("玩家2获胜!\n游戏结束。\n");
		}
	}
}

int main(){
	int i;
	drawing(arr);
	for( i = 0; i < 9; i++){
		begin();
		check(arr);
	}

	return 0;
}








//ID array

#include <stdio.h>

int main(){
	int i;
	int j;
	//declare and initialize
	int marks[2][3] = {
	{10,20,30},
	{40,50,60},
	};
	
	//for(start;stop;step)
	for(i = 0; i < 2;i++){
		for(j = 0; j < 3;j++){
		printf("%d ", marks[i][j]);
	}
	printf("\n");
	}

	return 0;
	
}

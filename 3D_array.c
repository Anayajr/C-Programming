//3D array

#include <stdio.h>

int main(){
	int i;
	int j;
	int k;
	//declare and initialize
	int marks[2][2][3] = {
	{
    {1,2,3},
	{4,5,6},
	},
	{
	{10,20,30},
	{40,50,60},
	}
	};
	
	//for(start;stop;step)
	for(i = 0; i < 2;i++){
		for(j = 0; j < 2;j++){
			for(k = 0; k < 3;k++){
		printf("%d ", marks[i][j][k]);
			}
			printf("\n");
	}
	printf("\n");
	}

	return 0;
	
}
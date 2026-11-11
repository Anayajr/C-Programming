//1D array

#include <stdio.h>

int main(){
	//declare and initialize
	int marks[5] = {10,20,30,40,50};
	int i;
	//printf("%d", marks[0]);
	//printf("%d", marks[1]);
	//printf("%d", marks[2]);
	//printf("%d", marks[3]);
	//printf("%d", marks[4]);
	
	//for(start;stop;step)
	for(i = 0; i < 5;i++){
		printf("%d ", marks[i]);
	}
	
	return 0;
	
}
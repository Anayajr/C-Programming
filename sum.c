// program to display 100-1

#include <stdio.h>

int main(){
    int i, sum=0; //%d
	//for(start;stop;step)
	for(i=100;i>=1;i--){
		printf("%d \n", i);
		sum = sum + i;
	}
	
	printf("\n The sum is %d",sum);
	
	return 0;
	
}
// program to display 1-10

/*
Author: Dunford Anaya
Adm No: BCS-05-0074/2026
Date: 6th October, 2026
Version 1
*/

#include <stdio.h>

int main(){
	int household; //%d
	float units; //%f

	printf("Electricity Bill per Household\n");
    
    for(household=1;household<=10;household++){
    
    printf("Enter units consumed for household %d \t",household);
	scanf("%f", &units);
	
	printf("Bill is Ksh %.2f \n",units * 10);
	}
	
	return 0;
	
}
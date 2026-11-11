/*
Author: Dunford Anaya
Admin no: BCS-05-0074/2026
Date: 25 October,2026
Descripition: A program displaying a hotel records of its total revenue for each day of the week
Version 1
*/


#include <stdio.h>

int main(){
	
	float revenue[7];
	float total = 0;
	float average;
	int i;
	
	for(i = 0;i < 7;i++){
		printf("Enter your revenue for day %d Ksh", i+1);
		scanf("%f", &revenue[i]);
	}
	
	for(i = 0;i < 7;i++){
		total += revenue[i];
	}
	
	average = total / 7;
	
	printf("\nThe total weekly revenue is Ksh %.2f\n", total);
	printf("\nThe average daily revenue is Ksh %.2f\n", average);
	
	return 0;
	
}

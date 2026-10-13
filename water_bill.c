//Program displaying number of water units consumed

/*
Author : Dunford Anaya
Adm No : BCS-05-0074/2026
Description : A program to calculate water bill that takes the number of units
Date : 6th October,2026
Version 1
*/

#include <stdio.h>

int main(){
	
	float units;
	float total_bill;
	
	printf("Enter water units consumed: ");
	scanf("%f", &units);
	
	if(units == 45){
		total_bill = 1025;
	}
	
	else if(units <= 30){
		total_bill = units * 20;
	}
	else if (units <= 60){
		total_bill = units * 25;
	}
	else{
		total_bill = units * 30;
	}
	
	printf("Total water bill: %.2f KES \n", total_bill);
	
	return 0;
	
}
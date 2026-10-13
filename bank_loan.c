/*
Author: Dunford Anaya
Admin no: BCS-05-0074/2026
Descrption: A program displaying bank loan offer to customer if they qualify their age and income.
Date: 9th October,2026
*/

#include <stdio.h>

int main(){
	int age;
	float income;
	
	printf("Enter your age: ");
	scanf("%d", &age);
	
	printf("Enter your annual income(in Ksh): ");
	scanf("%f", &income);
	
	if(age >= 21 && income >= 21000){
		printf("Congratulations you qualify for a loan.\n");
	}
	else{
		printf("Unfortunately, we are unable to offer you a loan at this time.\n");
	}
	
	printf("\nYou are %d years old. \n", age);
	printf("Your annual income is Ksh %.2f. \n", income);
	
	return 0;
	
}
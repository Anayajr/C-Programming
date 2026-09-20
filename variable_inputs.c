//Variable and Data Types

/*
Author: Dunford Anaya
Adm No: BCS-05-0074/2026
Date: 20th September 2026
Version 1
*/

#include <stdio.h>

int main(){
	
	float height ; //%f
	double bank_balance ; //%lf
	char phone_number[20] ; //%s
	
    //prompt the user
    
	printf("Fill the information.\n");
	
	printf("Enter your height(in centimeters): \t", height);
	scanf("%f", &height);
	
	printf("Enter your bank_balance (in Kenya Shillings): \t", bank_balance);
	scanf("%lf", &bank_balance);
	
	printf("Enter your phone_number: \t", phone_number);
	scanf("%s", &phone_number);
	
    printf("Fill the information.\n");
    printf("My new height is %.2f centimeters\n", height);
    printf("Bank balance is Ksh %.2lf \n", bank_balance);
    printf("Phone number: %s\n", phone_number);
	
	return 0;
	
}
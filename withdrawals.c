//Program displaying ATM withdrawal transactions, deducted amount and remaining balance.

/*
Author : Dunford Anaya
Adm No : BCS-05-0074/2026
Description : Simple ATM program that allow customers to make withdrawals
Date : 6th October,2026
Version 1
*/

#include <stdio.h>

int main(){
	float balance = 1000;
	float amount;
	
	printf("Welcome to ATM withdrawal system. \n");
	printf("Initial balance: Ksh %.2f \n", balance);
	
	printf("Enter withdrawal amount: ");
	scanf("%f", &amount);
	
	while(amount != 0 && amount <= balance){
		balance -= amount;
		printf("Withdrawal successful. \n");
		printf("Remaining balance: %.2f \n", balance);
		
		printf("\nEnter next withdrawal amount (or 0 to stop): ");
	    scanf("%f", &amount);
		
		if (amount == 0){
			printf("Transaction stopped. \n");
		}
		else if (amount > balance){
			printf("Insufficient funds! Transaction failed. \n");
		}
	}
	
	printf("Final balance: Ksh %.2f \n", balance);
	
	return 0;
	
}
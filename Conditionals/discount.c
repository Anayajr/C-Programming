/*
Program to compute discount
amount>=10,000 , 10% discount
amount between 5000 and 10000 = 5% 
below 5000, no discount
*/
#include <stdio.h>

int main(){
	float amount, discount, amount_to_pay; //%f
		
	printf("Enter amount purchased: \t");
	scanf("%f", &amount);
	
	if (amount>=15000){
		discount = 0.1 * amount;
		amount_to_pay = amount-discount;
		printf("discount = %.2f \n", discount);
		printf("Amount to Pay = %.2f \n", amount_to_pay);
	}
	else if(amount>=5000 && amount<10000){
		discount = 0.05 * amount;
		amount_to_pay = amount - discount;
		printf("Discount = %.2f \n", discount);
		printf("Amount to Pay = %.2f \n", amount_to_pay);
	}
	else{
		printf("No discount \n");
	}
		
	return 0;
	
}

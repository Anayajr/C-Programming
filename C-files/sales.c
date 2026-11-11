#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fptr;
	float transaction_amount;
	float total_sales = 0;
	fptr = fopen(" C:\\Users\\Admin\\OneDrive\\Desktop\\C Files\\sales.txt", "r");
	if (fptr == NULL){
		printf("Error opening the file \n");
	}
	else{
		exit(1);
	}
	
	while (fscanf(fptr, "%f", &transaction_amount) == 1){
		total_sales += transaction_amount;
	}
	
	printf("Total sales of the day = %.2f\n", total_sales);

	fclose(fptr);
	
	return 0;
	
}

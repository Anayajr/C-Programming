//Structure in c
#include <stdio.h>
#include <string.h>

struct Product{
	int product_code;
	char product_name[50];
	float unit_price;
	int stock_quantity;
};

int main(){
	struct Product product1, product2;
	float total_stock_value;
	
	printf("Enter product code: ");
	scanf("%d", &product1.product_code);
	
	printf("Enter product name: ");
	scanf(" %[^\n]", &product1.product_name);
	
	printf("Enter the unit price: ");
	scanf("%f", &product1.unit_price);
	
	printf("Enter quantity in stock: ");
	scanf("%d", &product1.stock_quantity);
	
	total_stock_value = product1.unit_price * product1.stock_quantity;
	
	printf("\nProduct code: %d \n", product1.product_code);
	printf("Product name: %s \n", product1.product_name);
	printf("Unit price: %.2f \n", product1.unit_price);
	printf("Quantity in stock: %.d \n", product1.stock_quantity);
	
	printf("\nTotal stock value: Ksh%.2f \n", total_stock_value);
}

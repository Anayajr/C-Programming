//Variable and Data Types

#include <stdio.h>

int main(){
	
	//declare and initialize variables
	char grade ; //%c
	char name[19] ; //string, %s
	int age  ; //%d
	float pi  ; //%f 
	double budjet ; //%lf
	
	//prompt the user
	printf("Enter your grade: \t", grade);
	scanf("%c", &grade);
	
	printf("Enter your name: \t", name);
	scanf("%s", &name);
	
	printf("Enter your age: \t", age);
	scanf("%d", &age);
	
	printf("Enter your pi: \t", pi);
	scanf("%f", &pi);
	
	printf("Enter your budjet: \t", budjet);
	scanf("%lf", &budjet);
	
	printf("The grade is %c \n", grade);
	printf("My name is %s \n", name);
	printf("I am %d years old \n", age);
	printf("The value of pi = %.2f \n", pi);
	printf("My semester budjet is %.lf \n", budjet);
	
	return 0;
	
}
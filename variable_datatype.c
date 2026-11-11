//Variable and Data Types

#include <stdio.h>

int main(){
	
	//declare and initialize variables
	char grade = 'A'; //%c
	char name[19] ="Anaya"; //string, %s
	int age = 19; //%d
	float pi = 3.142; //%f 
	double budjet = 100024; //%lf
	
	//prompt the user
	printf("Enter your grade: \t", grade);
	scanf("%c", &grade);
	
	printf("Enter your grade: \t", name);
	scanf("%c", &name);
	
	printf("Enter your grade: \t", age);
	scanf("%c", &age);
	
	printf("Enter your grade: \t", pi);
	scanf("%c", &pi);
	
	printf("Enter your grade: \t", budjet);
	scanf("%c", &budjet);
	
	printf("The grade is %c \n", grade);
	printf("My name is %s \n", name);
	printf("I am %d years old \n", age);
	printf("The value of pi = %.2f \n", pi);
	printf("My semester budjet is %.lf \n", budjet);
	
	return 0;
	
}
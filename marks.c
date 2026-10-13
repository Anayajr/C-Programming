//Program displaying total marks and average.

/*
Author: Dunford Anaya
Adm no: BCS-05-0074/2026
Date: 10th October,2026
Description: A program to calculate student's total marks and average.
Version1
*/

#include <stdio.h>

int calculateTotal(int mark1, int mark2, int mark3){
    return mark1 + mark2 + mark3;
}

int calculateAverage(int total){
    return total / 3;
}

int displayResult(int average){
	if(average >= 50){
		printf("Result: Passed \n");
	}
	else{
		printf("Result Failed \n");
	}
}

int main(){
    int mark1, mark2, mark3;
    int total;
    int average;

    printf("Enter mark for Subject 1: \t");
    scanf("%d", &mark1);

    printf("Enter mark for Subject 2: \t");
    scanf("%d", &mark2);

    printf("Enter mark for Subject 3: \t");
    scanf("%d", &mark3);

    total = calculateTotal(mark1, mark2, mark3);

    average = calculateAverage(total);

    printf("\nTotal marks: %d\n", total);
    printf("Average mark: %.2d\n", average);

    displayResult(average);

    return 0;
}
//Program displaying students examination marks

/*
Author : Dunford Anaya
Adm No : BCS-05-0074/2026
Description : Program that repeatedly ask lecturer to enter a student's marks
Date : 6th October,2026
Version 1
*/

#include <stdio.h>

int main(){
	int mark;  //%d
	char grade;  //%c
	char choice;  //%c
	
	do {
        printf("Enter student's mark (0 - 100): \t");
        scanf("%d", &mark);

        while (mark < 0 || mark > 100) {
            printf("Error: Invalid mark! Enter a mark between 0-100: \t");
            scanf("%d", &mark);
        }

        if (mark >= 80) {
            grade = 'A';
        }
        else if (mark >= 70) {
            grade = 'B';
        }
        else if (mark >= 60) {
            grade = 'C';
        }
        else if (mark >= 50) {
            grade = 'D';
        }
        else {
            grade = 'F';
        }

        printf("Mark: %d\n", mark);
        printf("Grade: %c\n", grade);

        printf("Do you want to enter another student's mark? (y/n): \n");
        scanf(" %c", &choice);

    }while(choice == 'y' || choice =='Y');
    
    printf("\nEnd of program.\n");
    
    return 0;
    
}

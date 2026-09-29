//Program displaying exam eligibility.

/*
Author: Dunford Anaya
Adm no: BCS-05-0074/2026
Date: 29th September,2026
Description: A program that checks if a student is eligible for final exams
Version1
*/

#include <stdio.h>

int main(){
	float attendance, average_marks;
	
	printf("Enter the attendance: \t",attendance);
	scanf("%f", &attendance);
	
	printf("Enter the average marks: \t",average_marks);
	scanf("%f", &average_marks);
	
	if(attendance >= 75 && average_marks >= 40){
		printf("Eligible for final exams. \n");
	}
	else{
		printf("Not Eligible");
	}
	
	return 0;
	
}
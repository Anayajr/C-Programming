/*
Author: Dunford Anaya.
Description: A program displaying a student's marks in five units.
Date: 06/11/2026
*/

#include <stdio.h>

int main(){
	int marks[5], total = 0, i, invalid_marks = 0, supplementary = 0;
	float average;
	
	for(i = 0; i <= 4; i++){
		printf("Enter the student's marks for unit %d: ", i + 1);
		scanf("%d", &marks[i]);
		
		if(marks[i] < 0 || marks[i] > 100){
			invalid_marks = 1;
		}
		
		if(marks[i] < 30){
			supplementary = 1;
		}
	}
	
	//If any unit has marks below 0 or above 100 display an invalid mark message.
	if(invalid_marks){
		printf("The mark entered is invalid. Marks must be between 0 and 100. \n");
	}
	else{
		for(i = 0; i <= 4; i++){
		total += marks[i];	
		}
	}
	
	//Calculate the average marks.
	average = total / 5;
	printf("\nTotat marks: %d \n", total);
	printf("Average marks: %.2f \n", average);
	
	//Determine whether the student has passed or failed.
	if(average >= 70){
	    printf("Status: Passed\nClassification: First Class\n");
	}
	else if(average >= 60){
		printf("Status: Passed\nClassification: Second Class Upper\n");
	}
	else if(average >= 50){
		printf("Status: Passed\nClassification: Second Class Lower\n");
	}
	else if(average >= 40){
		printf("Status: Passed\nClassification: Pass\n");	
	}
	else
	{
		printf("Status: Failed\nClassification: Fail\n");
	}
	
	/*if the average is atleast 40 but any individual unit 
	is below 30, display a supplementary examination needed*/
	if(average >= 40 && supplementary){
		printf("WARNING! Supplementary exam needed asap.\n");
	}
	
	return 0;

}

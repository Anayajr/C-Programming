//C file handling
#include <stdio.h>
#include <stdlib.h>

void saveStudent();
void displayStudents();
void addStudent();

int main(){
	
	saveStudent();
	displayStudents();
	addStudent();
	displayStudents();
	
	return 0;
	
}

void saveStudent(){
	FILE *fp;
	char admission[30];
	char name[60];
	char course[70];
	fp = fopen("students.txt", "w");
	
	if(fp == NULL){
		printf("Error opening the file");
		exit(1);
	}
	
	printf("Enter admission number: \n");
	fgets(admission, sizeof(admission), stdin);
	
	printf("Enter full name: \n");
	fgets(name, sizeof(name), stdin);
	
	printf("Enter course: \n");
	fgets(course, sizeof(course), stdin);
	
	printf("Students detail saved successfully. \n");
	fclose(fp);
}

void displayStudents(){
	FILE *fp;
	int ch;
	fp = fopen("students.txt", "r");
	
	if(fp == NULL){
		printf("Error opening the file");
		exit(1);
	}
	
	printf("Student Record")
	while((ch = getc(fp)) != EOF){
	       putchar(ch);
	}
	
	fclose(fp);
}

void addStudent(){
	FILE *fp;
	char admission[30];
	char name[60];
	char course[70];
	fp = fopen("students.txt", "a");
	
	if(fp == NULL){
		printf("Error opening the file");
		exit(1);
	}
	
	printf("Enter admission number: \n");
	fgets(admission, sizeof(admission), stdin);
	
	printf("Enter full name: \n");
	fgets(name, sizeof(name), stdin);
	
	printf("Enter course: \n");
	fgets(course, sizeof(course), stdin);
	
	printf("Students detail added successfully. \n");
	fclose(fp);
}

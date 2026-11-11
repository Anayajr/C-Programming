//C file handling
#include <stdio.h>
#include <stdlib.h>

void writeEmployee();
void readEmployee();
void appendEmployee();

int main(){
	
	writeEmployee();
	readEmployee();
	appendEmployee();
	readEmployee();
	
	return 0;
	
}

void writeEmployee(){
	FILE *fp;
	char id_number[15];
	char name[60];
	char department[70];
	fp = fopen("C:\\Users\\Admin\\OneDrive\\Desktop\\C Files\\employees.txt", "w");
	
	if(fp == NULL){
		printf("Error opening the file");
		exit(1);
	}
	
	printf("Enter employee's identification number: ");
	fgets(id_number, sizeof(id_number), stdin);
	
	printf("Enter employee's full name: ");
	fgets(name, sizeof(name), stdin);
	
	printf("Enter employee's department: ");
	fgets(department, sizeof(department), stdin);
	
	printf("Employee's detail saved successfully. \n");
	fclose(fp);
}

void readEmployee(){
	FILE *fp;
	int ch;
	fp = fopen("C:\\Users\\Admin\\OneDrive\\Desktop\\C Files\\employees.txt", "r");
	
	if(fp == NULL){
		printf("Error opening the file");
		exit(1);
	}
	
	printf("Employee Record \n");
	while((ch = getc(fp)) != EOF){
	       putchar(ch);
	}
	
	fclose(fp);
}

void appendEmployee(){
	FILE *fp;
	char id_number[15];
	char name[60];
	char department[70];
	fp = fopen("C:\\Users\\Admin\\OneDrive\\Desktop\\C Files\\employees.txt", "a");
	
	if(fp == NULL){
		printf("Error opening the file");
		exit(1);
	}
	
	printf("Enter employee's identification number: ");
	fgets(id_number, sizeof(id_number), stdin);
	
	printf("Enter employee's full name: ");
	fgets(name, sizeof(name), stdin);
	
	printf("Enter employee's department: ");
	fgets(department, sizeof(department), stdin);
	
	printf("Employee's detail added successfully. \n");
	fclose(fp);
}

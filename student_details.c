#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char students_name[100];
    char reg_number[50];

	//open the file
    fptr = fopen(" C:\\Users\\Admin\\OneDrive\\Desktop\\C Files\\student_details.txt", "w");

    if (fptr == NULL) {
        printf("Error opening file.\n");
		exit (1);    
	}

    printf("Enter student's full name: ");
    fgets(students_name, sizeof(students_name), stdin);

    printf("Enter registration number: ");
    fgets(reg_number, sizeof(reg_number), stdin);

	//write to file
    fprintf(fptr, "Student Name: %s", students_name);
    fprintf(fptr, "Registration Number: %s", reg_number);

	//close the file
    fclose(fptr);

    printf("Student details saved successfully.\n");

    return 0;
}
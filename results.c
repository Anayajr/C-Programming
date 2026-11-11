#include <stdio.h>
#include <stdlib.h>

struct Student{
	char students_name[50], reg_number[20];
	int marks;
};

int main(){
	FILE *fptr;
	struct Student s;
	fptr = fopen(" C:\\Users\\Admin\\OneDrive\\Desktop\\C Files\\results.dat", "rb");
	if (fptr == NULL){
		printf("Error opening the file \n");
	}
	else{
		exit(1);
	}
	
	printf("Student Examination Results\n");
	
	while (fread(&s, sizeof(s), 1, fptr) == 1){
		printf("\nName: %s", s.students_name);
		printf("\nMarks: %d\n", s.marks);
	}

	fclose(fptr);
	
	return 0;
	
}
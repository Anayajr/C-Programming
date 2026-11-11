//Structure in c
#include <stdio.h>
#include <string.h>

struct Student{
	char name[30];
	char course[70];
	char admission[30];
	int age;
	char phone_number[15];
	float marks;
};

int main(){
	struct Student student1, student2;
	
	/*
	strcpy(student1.name, "Anaya");
	strcpy(student1.course, "Computer Science");
	strcpy(student1.admission, "BCS-05-0074/2026");
	student1.age = 19;
	strcpy(student1.phone_number, "07123456789");
	student1.marks = 70.2;
	*/
	
	printf("Enter your name: ");
	//scanf("%s", &student1.name);
	//scanf(" %[^\n]", &student1.name);
	fgets(student1.name, sizeof(student1.name), stdin);
	
	printf("Enter your course: ");
	scanf(" %[^\n]", &student1.course);
	
	printf("Enter your admission: ");
	scanf("%s", &student1.admission);
	
	printf("Enter your age: ");
	scanf("%d", &student1.age);
	
	printf("Enter your phone number: ");
	scanf("%s", &student1.phone_number);
	
	printf("Enter your marks: ");
	scanf("%f", &student1.marks);
	
	printf("\nName: %s \n", student1.name);
	printf("Course: %s \n", student1.course);
	printf("Admission: %s \n", student1.admission);
	printf("Age: %d \n", student1.age);
	printf("Phone Number: %s \n", student1.phone_number);
	printf("Marks: %.2f \n", student1.marks);
}
//Structure in c
#include <stdio.h>
#include <string.h>

struct Patient{
	int patientID;
	char patient_name[30];
	int age;
	float temperature;
	int days_admitted;
};

int main(){
	struct Patient patient1, patient2;
	float accommodation_cost;
	
	printf("Enter patient ID: ");
	scanf("%d", &patient1.patientID);
	
	printf("Enter patient name: ");
	scanf(" %[^\n]", &patient1.patient_name);
	
	printf("Enter your age: ");
	scanf("%d", &patient1.age);
	
	printf("Enter the temperature: ");
	scanf("%f", &patient1.temperature);
	
	printf("Enter day admitted: ");
	scanf("%d", &patient1.days_admitted);
	
	accommodation_cost = patient1.days_admitted * 2500;
	
	printf("\nPatient ID: %d \n", patient1.patientID);
	printf("Patient name: %s \n", patient1.patient_name);
	printf("Age: %d \n", patient1.age);
	printf("Temperature: %.2f \n", patient1.temperature);
	printf("Day admitted: %.d \n", patient1.days_admitted);
	
	printf("\nHospital accomodation cost: Ksh%.2f \n", accommodation_cost);
}
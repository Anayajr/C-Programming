//Program displaying distance travelled.

/*
Author : Dunford Anaya
Adm No : BCS-05-0074/2026
Description : A program showing fare rate.
consumed 
Date : 8th October,2026
Version 1.
*/

#include <stdio.h>

float calculateFare(float distance){
    float fare;
	fare = distance * 50;
    return fare;
}

int main() {
    float distance, totalFare;

    printf("Enter distance travelled (in kilometres): ");
    scanf("%f", &distance);

    totalFare = calculateFare(distance);

    printf("\nDistance travelled = %.2f km \n", distance);
    printf("Total fare = KSh. %.2f \n", totalFare);

    return 0;
}
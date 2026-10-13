//Program displaying Pythagorean theorem

/*
Author: Dunford Anaya
Adm no: BCS-05-0074/2026
Date: 10th October,2026
Description: A program to calculate the diagonal length of a rectangular window.
Version1
*/

#include <stdio.h>
#include <math.h>

double calculateDiagonal(double length, double width){
    return sqrt(pow(length, 2) + pow(width, 2));
}

double displayResult(double length, double width, double diagonal){
    return diagonal;
}

int main(){
    double length, width, diagonal;

    printf("Enter the length of the window: ");
    scanf("%lf", &length);

    printf("Enter the width of the window: ");
    scanf("%lf", &width);

    diagonal = calculateDiagonal(length, width);

    displayResult(length, width, diagonal);
    
    printf("Length: %.2f\n", length);
    printf("Width: %.2f\n", width);
    printf("Diagonal: %.2f\n", diagonal);
    
    printf("\nPurpose of sqrt(): \n");
    printf("1. It calculate square root. \n");
    printf("2. In this case is used in Pythagorean theorem. \n");

    return 0;
}
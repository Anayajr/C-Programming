//Program displaying simple interest and compound interest

/*
Author: Dunford Anaya
Admission Number: BCS-05-0074/2026
Date: 29th September,2026
*/

#include <stdio.h>
#include <math.h>

int main(){
    double principal, time, rate;
    double simple_interest;
    double compound_interest;
    
    printf("Enter the principal amount:\t",principal);
    scanf("%lf",&principal);
    
    printf("Enter the time:\t",time);
    scanf("%lf",&time);
    
    printf("Enter the rate:\t",rate);
    scanf("%lf",&rate);
    
    simple_interest = (principal*time*rate)/100;
    compound_interest = principal * pow((1+rate/100),time) - principal;
    
    printf("Simple Interest: Kshs %.2lf \n",simple_interest);
    printf("Compounded Interest: Kshs %.2lf \n",compound_interest);
    
    return 0;
}
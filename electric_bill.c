//Program displaying electric bill consumed.

/*
Author : Dunford Anaya
Adm No : BCS-05-0074/2026
Description : A program to calculate electric bill that takes the number of units
consumed 
Date : 8th October,2026
Version 1.
*/

#include <stdio.h>

//For the first 100 units. KSh. 10 per unit(0 - 100 units). Max capacity of 100
//For the next 100 units. KSh. 15 per unit(101 - 200 units). Max capacity of 100
//Above 200 units. KSh. 20 per unit(Above 200 units). No max capacity

float calculateElectricBill(int units){
    float bill;

    if (units <= 100){
        bill = units * 10;
    }
    else if (units <= 200){
        bill = (100 * 10) + ((units - 100) * 15);
    }
    else{
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;
}

int main(){
    int units;
    float totalBill;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    totalBill = calculateElectricBill(units);

    printf("Total electricity bill = KSh. %.2f\n", totalBill);

    return 0;
}
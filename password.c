/*
Author: Dunford Anaya
Admin no: BCS-05-0074/2026
Descrption: A program that the user to enter the correct password.
Date: 9th October,2026
*/

#include <stdio.h>

int main(){
    int password;

    do{
        printf("Enter password: ");
        scanf("%d", &password);

    } while (password != 1234);

    printf("Access Granted\n");

    return 0;
}
//Program to display fine for overdue library books

/*
Author : Dunford Anaya
Adm No : BCS-05-0074/2026
Description : Library fine charges
Date : 26th September,2026
Version 1
*/
#include <stdio.h>

int main(){
   int bookID, dueDate, returnDate;  //%d
   int daysOverdue;  //%d
   int fineRate;  //%d
   int fineAmount;  //%d
   
   printf("Enter Book ID: \t",bookID);
   scanf("%d", &bookID);
   
   printf("Enter Due Date: \t",dueDate);
   scanf("%d", &dueDate);
   
   printf("Enter Return Date: \t",returnDate);
   scanf("%d", &returnDate);
   
   daysOverdue = returnDate - dueDate;
   
   if (daysOverdue <=7){
        fineRate = 20;
   }
     else if (daysOverdue>=8 && daysOverdue<=14){
         fineRate = 50;
     }
     else {
         fineRate =100;
     }
     
     fineAmount = daysOverdue*fineRate;
     
     printf("Book ID = %d \n" ,bookID);
     printf("Due Date = %d \n" ,dueDate);
     printf("Return Date = %d \n" ,returnDate);
     printf("Days Overdue = %d \n" ,daysOverdue);
     printf("Fine Rate = %d \n" ,fineRate);
     printf("Fine Amount = %d \n" ,fineAmount);
     
    return 0;
    
    }
//program to calculate fine for overdue library books 
/*
Author: Gabriel Omondi Omedo 
Reg No: D33-2474-2023 
Version 1
Date: 28/02/2025
*/

#include<stdio.h>

int main()
{
    //variable declaration 
    int bookID; //%d
    int dueDate;//%d
    int returnDate;//%d
    int daysOverdue;//%d
    int fineRate;//%f
    int fineAmount;//%f
    
    printf("Enter bookID:");
    scanf("%d", & bookID);
    
    printf("Enter dueDate:");
    scanf("%d", & dueDate);
    
    printf("Enter returnDate:");
    scanf("%d", & returnDate);
    
    daysOverdue=(returnDate-dueDate);
    printf("daysOverdue is %d \n", daysOverdue );
    
    if(daysOverdue<=7){
        printf("fineRate=Ksh20");
    }
    else if(daysOverdue>8<=15){
        printf("fineRate=Ksh50");
    }
    else if(daysOverdue>=15){
        printf("fineRate=Ksh100");
    }
    
    
    fineAmount=(daysOverdue*fineRate);
    printf("fineAmount is %f \n", fineAmount);
    
    return 0;
}
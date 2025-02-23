//program to calculate compound interest 
/*
Author: Gabriel Omondi Omedo 
Reg: D33-2474-2023
Date: 23/02/2025
*/
#include<stdio.h>
#include <math.h>
int main()
{
    int p;//principle 
    int r;//rate
    int n;//number of compounding a year
    int t;//total number of years
    int A;//final amout
    
    printf("enter principle value:");
    scanf("%d",&p);
    
    printf("enter rate value:");
    scanf("%d",&r);
    
    printf("enter number ofcompounding a year:");
    scanf("%d",&n);
    
    printf("enter number of years");
    scanf("%d",&t);
    
    A=p*pow((1+r/n),n*t);
    printf("compound interest: %d",A);
    
    return 0;
}
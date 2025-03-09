//program to display the cube of numbers 
/*
Author: Gabriel Omondi Omedo
Reg: D33-2474-2023
Date:09/03/2025
*/

#include<stdio.h>

int main() {

    int terms;
    
    printf("Input number of terms:");
    scanf("%d", &terms);
    
    printf("cube of numbers upto %d terms:\n", terms);
    
    for (int i=1; i<= terms ;i++) {
    printf("number is:%d and cube of the %d is %d\n",i,i,i*i*i);
    }
    return 0;
}
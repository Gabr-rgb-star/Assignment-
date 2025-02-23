/*

program to output area of rectangle 
Author:Gabriel Omondi Omedo
Reg:D33-2474-2023
Date:23/02/2025

*/

#include<stdio.h>

int main()
{
    float length, width, area;
    
    printf("Enter Length of rectangle\n");
    scanf("%f",&length);
    
    printf("Enter width of rectangle\n");
    scanf("%f",&width);
    
    area=length * width;
    
    printf("Area of Rectangleis %f\n",area);
    
    return 0;
}
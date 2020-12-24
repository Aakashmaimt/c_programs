//Program to calculate the factorial of a number
//Author  Aakash  Date 22 Nov 2020
#include<stdio.h>

int main(){
    int i,number,factorial=1;
    printf("Enter the number to calculate the factorial :");
    scanf("%d",&number);

    for(i=1;i<=number;i++)
    {
        factorial*=i;
    }
    printf("Factorial of %d is %d",number,factorial);
    
    return 0;
}
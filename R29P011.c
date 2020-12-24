//Program to find a absolute number
//Author Aakash  Date October 21,2020
#include<stdio.h>

int main()
{
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);

    if(number < 0)
    {
        printf("Absolute number is %d",-number);
    }
    else
    {
        printf("Number is already absolute.");
    }
    
    return 0;
}
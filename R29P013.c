//Program to find a number is odd or even
//Author Aakash  Date October 21,2020
#include<stdio.h>

int main()
{
    int number;
    printf("Enter any number :");
    scanf("%d",&number);

    if(number%2 == 0)
    {
        printf("Number is even.");
    }
    else
    {
        printf("Number is odd.");
    }
    
    return 0;
}

//number&1  -> odd
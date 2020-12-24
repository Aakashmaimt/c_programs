//Program to find the reverse of a number
//Author Aakash  Date October 21,2020
#include<stdio.h>

int main()
{
    int number,reverse,d1,d2,d3,d4,temp;
    printf("Enter the four digit number :");
    scanf("%d",&number);

    temp=number;

    d1=temp%10;
    temp=temp/10;
    d2=temp%10;
    temp=temp/10;
    d3=temp%10;
    temp=temp/10;
    d4=temp%10;
    temp=temp/10;

    reverse=d1*1000+d2*100+d3*10+d4*1;
    
    if(number == reverse)
    {
        printf("Reverse number is equal to the original number.");
    }
    else
    {
        printf("Reverse number is not equal to the original number.");
    }
    
    return 0;
}
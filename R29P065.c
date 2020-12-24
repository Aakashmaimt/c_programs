//Program to calculate the power of number one raised to the other
//Author Aakash  Date 21 Dec 2020
#include<stdio.h>

int power_function(int,int);

int main()
{
    int number,power,result;
    printf("Enter the number :");
    scanf("%d",&number);
    printf("Enter power :");
    scanf("%d",&power);

    result=power_function(number,power);
    printf("Answer is %d",result);
    return 0;
}

int power_function(int a,int b)
{
    int i,c=1;
    for ( i = 0; i < b; i++)
    {
        c=c*a;
    }
    return c;
}
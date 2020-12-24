//Program to calculate whether the year is leap year or not
//Author Aakash Date 21 Dec 2020
#include<stdio.h>

int leap_year(int);

int main()
{
    int year,result;
    printf("Enter any year :");
    scanf("%d",&year);

    result=leap_year(year);
    if(result)
    {
        printf("Leap year.");
    }
    else
    {
        printf("Not a leap year.");
    }
    return 0;
}

int leap_year(int year)
{
    if((year%4==0) && (year%100!=0) || (year%400==0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
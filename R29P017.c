//Program to check whether the year is leap year or not
//Author Aakash  Date October 23,2020
#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year :");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0){
                printf("Leap year.");
            }
            else
            {
                printf("Not a leap year.");
            }
            
        }
        else
        {
            printf("Leap year.");
        }
        
    }
    else
    {
        printf("Not a leap year.");
    }
    
    return 0;
}

//check your program for these inputs
//1700,1800,1900  not leap years
//1600, 2000 leap years

//Program to calculate the average and percentage of a student of three subjects
//Author Aakash  Date 22 Dec 2020
#include <stdio.h>

void average_percentage_calculator(int, int, int, int *, int *);

int main()
{
    int marks1, marks2, marks3, average, percentage;
    printf("Enter marks of first subject :");
    scanf("%d", &marks1);
    printf("Enter marks of second subject :");
    scanf("%d", &marks2);
    printf("Enter marks of third subject :");
    scanf("%d", &marks3);

    average_percentage_calculator(marks1, marks2, marks3, &average, &percentage);
    printf("Average of marks is %d\n", average);
    printf("Percentage is %d", percentage);

    return 0;
}

void average_percentage_calculator(int a,int b,int c,int *average,int *percentage)
{
    *average=(a+b+c)/3;
    *percentage=((a+b+c)*100)/300;
}

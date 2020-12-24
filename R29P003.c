//Program to calculate aggregate marks and percentage of three subjects
//AUthor Aakash  Date October 13,2020

#include<stdio.h>

int main()
{
    float hindi,english,maths,aggregate_marks,percentage;

    printf("Enter hindi marks :");
    scanf("%f",&hindi);
    printf("Enter english marks :");
    scanf("%f",&english);
    printf("Enter mathematics marks :");
    scanf("%f",&maths);

    aggregate_marks = hindi+english+maths;
    percentage = (aggregate_marks/300)*100;
    printf("Total marks are %.2f",aggregate_marks);
    printf("\nPercentage is %.2f %%.",percentage);
    
    return 0;
}
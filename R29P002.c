//Program to convert kilometer into meter , centimeter , feet and inches
//Author Aakash   Date October 13,2020

#include<stdio.h>

int main()
{
    float kilometer,feet,inches,meter,centimeter;
    printf("Enter the distance between two cities in kilometer :");
    scanf("%f",&kilometer);

    meter = kilometer*1000;
    centimeter = kilometer*10000;
    feet = kilometer*3280;
    inches = kilometer*39370.1;

    printf("Distance in meter is %f\n",meter);
    printf("Distance in centimeter is %f\n",centimeter);
    printf("Distance in feet is %f\n",feet);
    printf("Distance in inches is %f\n",inches);
    
    return 0;
}
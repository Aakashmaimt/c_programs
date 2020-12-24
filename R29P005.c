//Program to calcualte area of circle and rectangle and also perimeter of rectangle and circumference of circle
//Author Aakash  Date October 16,2020
#include<stdio.h>

int main()
{
    int length,breadth,radius,area_of_circle,circumference_of_circle,area_of_rectangle,perimeter_of_rectangle;
    printf("Enter the length of rectangle :");
    scanf("%d",&length);
    printf("Enter the breadth of rectangle :");
    scanf("%d",&breadth);
    printf("Enter the radius of circle :");
    scanf("%d",&radius);

    area_of_rectangle = length*breadth;
    perimeter_of_rectangle = 2*(length+breadth);
    area_of_circle = (22/7)*radius*radius;
    circumference_of_circle = 2*(22/7)*radius;

    printf("Area of rectangle is %d.\n",area_of_rectangle);
    printf("Perimeter of rectangle is %d.\n",perimeter_of_rectangle);
    printf("Area of circle is %d.\n",area_of_circle);
    printf("Circumference of circle is %d.\n",circumference_of_circle);

    return 0;
}
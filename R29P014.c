//Program to find whether the triangle is valid or not
//Author Aakash  Date October 21,2020
#include <stdio.h>

int main()
{
    int angle1, angle2, angle3, total;
    printf("Enter the angle first :");
    scanf("%d", &angle1);
    printf("Enter the angle second :");
    scanf("%d", &angle2);
    printf("Enter the angle third :");
    scanf("%d", &angle3);

    total = angle1 + angle2 + angle3;
    if (total == 180)
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }

    return 0;
}
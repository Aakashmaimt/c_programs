//Program to check whether the triangle is Isosceles , equilateral , scalene or right angled
//Author Aakash  Date 11 Nov 2020
#include <stdio.h>
#include <math.h>

int main()
{
    int side1, side2, side3;
    printf("Enter the first side of triangle :");
    scanf("%d", &side1);
    printf("Enter the second side of triangle :");
    scanf("%d", &side2);
    printf("Enter the third side of triangle :");
    scanf("%d", &side3);


    if (((side1 * side1) == (side2 * side2) + (side3 * side3)) || ((side2 * side2) == (side1 * side1) + (side3 * side3)) || (side3 * side3) == (side1 * side1) + (side2 * side2))
    {
        printf("Right angle triangle");
    }
    else if (side1 == side2 && side1 == side3 && side2 == side3)
    {
        printf("Triangle is equilateral.");
    }
    else if (side1 == side2 || side1 == side3 || side2 == side3)
    {
        printf("Triangle is isosceles.");
    }
    else if (side1 != side2 && side1 != side3 && side2 != side3)
    {
        printf("Triangle is scalene.");
    }

    return 0;
}
//24  26  10  right angle triangle
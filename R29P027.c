//Program to print ASCII values on screen
//Author Aakash  Date 30 Nov 2020
#include <stdio.h>

int main()
{
    int count = 0;
    while (count <= 255)
    {
        printf("The number %d is character %c\n", count, count);
        count++;
    }
    return 0;
}
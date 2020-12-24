//Program to find out the enterd digit is lowercase or uppercase or a special symbol
//Author Aakash  Date October 23,2020
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character :");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90) 
    {
        printf("Entered character is in uppercase.");
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("Entered character is in lowercase.");
    }
    else if (ch >= 48 && ch <= 57)
    {
        printf("Enterd character is a number.");
    }
    else if ((ch >= 0 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 127))  
    {
        printf("Entered character is any special symbol.");
    }

    return 0;
}
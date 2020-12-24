//Program to calculate the youngest out of three persons
//Author Aakash  Date October 23,2020
#include <stdio.h>

int main()
{
    int ram_age, shyam_age, ajay_age;
    printf("Enter the Ram age :");
    scanf("%d", &ram_age);
    printf("Enter the Shyam age :");
    scanf("%d", &shyam_age);
    printf("Enter the age of Ajay :");
    scanf("%d", &ajay_age);

    if (ram_age < shyam_age)    
    {    
        if (ram_age < ajay_age)
        {
            printf("Ram is the youngest.");
        }
        else
        {
            printf("Ajay is the youngest.");
        }
    }
    else
    {
        if (shyam_age < ajay_age)
        {
            printf("Shyam is the youngest.");
        }
        else
        {
            printf("Ajay is the youngest.");
        }
    }

    return 0;
}
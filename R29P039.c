//Program to count the number of zero's negative and positive numbers
//Author Aakash  Date 30 Nov 2020
#include<stdio.h>

int main()
{
    int zero=0,pos=0,neg=0,number;
    char choice;
    do
    {
        printf("Enter any number :");
        scanf("%d",&number);
        if(number==0)
        {
            zero++;
        }
        else if(number<0)
        {
            neg++;
        }
        else
        {
            pos++;
        }
        fflush(stdin);
        printf("Do you want to enter more number y for yes and n for no :");
        scanf("%c",&choice);
        
    } while (choice=='y' || choice == 'Y');
    printf("\nNegative numbers are %d\n",neg);
    printf("Zero's are %d\n",zero);
    printf("Positive numbers are %d",pos);

    return 0;
}
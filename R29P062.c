//Program of menu driven for factorial , prime and odd 
//Author Aakash  Date 21 Dec 2020
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int number,choice,i,factorial;
    while(1)
    {
        printf("\n1. To calculate factorial of a number \n");
        printf("2. To check whether a number is prime or not\n");
        printf("3. To find the number is even or odd\n");
        printf("4. Exit\n");
        printf("Enter your choice :");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            {
                factorial=1;
                printf("Enter the number :");
                scanf("%d",&number);

                for ( i = 1; i <= number; i++)
                {
                    factorial=factorial*i;
                }
                printf("Factorial is %d\n",factorial);
                break;
            }
            case 2:
            {
                printf("Enter any number :");
                scanf("%d",&number);

                for ( i = 2; i <= number/2; i++)
                {
                    if(number%i==0)
                    {
                        break;
                    }
                }
                if(i>number/2)
                {
                    printf("Prime number\n");
                }
                else
                {
                    printf("Not a prime number\n");
                }
                break;
            }
            case 3:
            {
                printf("Enter any number :");
                scanf("%d",&number);

                if(number%2==0)
                {
                    printf("Even number\n");
                }
                else
                {
                    printf("Odd number\n");
                }
                break;
            }
            case 4:
            {
                exit(0);
            }
            default:
            {
                printf("Wrong input ! \nPlease input between 1 to 4\n");
            }
        }
    }
    return 0;
}
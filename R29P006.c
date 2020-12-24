//Program to interchange the values
//Author Aakash Date October 16,2020
#include<stdio.h>

int main()
{
    int num1,num2,temp;
    printf("Enter the value of num1 :");
    scanf("%d",&num1);
    printf("Enter the value of num2 :");
    scanf("%d",&num2);

    temp=num1;
    num1=num2;
    num2=temp;

    printf("Now num1 value is %d.\n",num1);
    printf("And num2 is %d.",num2);

    return 0;

}
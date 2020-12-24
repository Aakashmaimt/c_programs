//Program to find the octal equivalent of an integer
//Author Aakash  Date 30 Nov 2020
#include<stdio.h>

int main()
{
    int number,reminder,octal=0,j=1,temp;
    printf("Enter any number :");
    scanf("%d",&number);

    temp=number;
    while(temp!=0)
    {
        reminder=temp%8;
        reminder=reminder*j;
        octal=octal+reminder;
        j=j*10;
        temp=temp/8;
    }
    printf("%d is octal equivalent of %d",octal,number);

    return 0;
}
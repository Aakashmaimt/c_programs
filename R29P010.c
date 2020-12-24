//Program to calculate the number of notes of ten , fifty and hundred of entered amount
//Author Aakash  Date October 21,2020
#include<stdio.h>

int main()
{
    int amount,hundred_notes,fifty_notes,ten_notes,temp;
    printf("Enter the amount :");
    scanf("%d",&amount);

    temp=amount;
    hundred_notes=temp/100;
    temp=temp%100;
    fifty_notes=temp/50;
    temp=temp%50;
    ten_notes=temp/10;

    printf("Amount is %d\n",amount);
    printf("Ten notes are %d\n",ten_notes);
    printf("Fifty notes are %d\n",fifty_notes);
    printf("Hundred notes are %d\n",hundred_notes);

    return 0;
}
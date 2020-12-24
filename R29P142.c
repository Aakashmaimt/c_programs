//Program to calculate the length of array without using loop
//Author Aakash  Date 21 Dec 2020
#include<stdio.h>

int main()
{
    int length;
    int arr[]={1,2,3,4,5,6};
    length=sizeof(arr)/sizeof(int);
    printf("The length of the given array is %d.",length);
    
    return 0;
}
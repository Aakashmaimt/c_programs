//Program to convert decimal number into binary
//Author Aakash  Date 29 Nov 2020
#include<stdio.h>

int main()
{
    int number,i=1,reminder,temp;
    long int binary=0;
    printf("Enter any number :");
    scanf("%d",&number);

    temp=number;
    while(temp!=0)
    {
        reminder=temp%2;
        reminder=reminder*i;
        binary=binary+reminder;
        i=i*10;
        temp/=2;
    }
    
    printf("Binary number is %d",binary);
    
    return 0;
}

    // for(j=number;j>0;j/=2)
    // {
    // 	binary=binary+(number%2)*i;
    // 	i=i*10;
    // 	number=number/2;
	// }
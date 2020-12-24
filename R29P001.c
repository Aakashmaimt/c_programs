//Program to calculate gross salary 
//Author Aakash   Date October 13 , 2020

#include<stdio.h>

int main()
{
    int basic_salary,gross_salary,hra,allowance;
    printf("Enter basic salary :");
    scanf("%d",&basic_salary);

    allowance=(basic_salary*40)/100;
    hra=(basic_salary*20)/100;

    gross_salary=basic_salary+hra+allowance;

    printf("Gross salary is %d",gross_salary);
    return 0;
}
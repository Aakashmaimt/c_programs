//Program to find out prime factor of given number
//Author Aakash  Date 05 Dec 2020
#include <stdio.h>

int main()
{
	int number, fact = 2;
	printf("Enter the numberber :");
	scanf("%d", &number);

	while (number != 1)
	{
		if (number % fact == 0)
		{
			printf("Factor is %d\n", fact);
			number = number / fact;
		}
		else
			fact = fact + 1;
	}
	return 0;
}
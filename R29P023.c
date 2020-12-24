//Program to find the efficiency of a worker
//Author Aakash Date 11 Nov 2020
#include <stdio.h>

int main()
{
    float time;
    printf("Enter the time taken by the worker : ");
    scanf("%f", &time);

    if (time > 2 && time < 3)
    {
        printf("Worker is highly efficient.");
    }
    else if (time > 3 && time < 4)
    {
        printf("Ordered worker to improve speed.");
    }
    else if (time > 4 && time < 5)
    {
        printf("Worker has to take training so that his speed is improved.");
    }
    else if (time > 5)
    {
        printf("Worker has to leave the company.");
    }

    return 0;
}
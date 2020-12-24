//Program to read five numbers and calculate sum , average and standard derivation in a function and print them in main
//Author Aakash  Date 22 Dec 2020
#include <stdio.h>
#include <math.h>

void function(int, int, int, int, int, int *, int *, int *);

int main()
{
    int a, b, c, d, e, sum, average, standard_derivation;
    printf("Enter number 1 :");
    scanf("%d", &a);
    printf("Enter number 2 :");
    scanf("%d", &b);
    printf("Enter number 3 :");
    scanf("%d", &c);
    printf("Enter number 4 :");
    scanf("%d", &d);
    printf("Enter number 5 :");
    scanf("%d", &e);

    function(a, b, c, d, e, &sum, &average, &standard_derivation);
    printf("Sum is %d\n", sum);
    printf("Average is %d\n", average);
    printf("Standard Derivation is %d", standard_derivation);

    return 0;
}

void function(int a, int b, int c, int d, int e, int *sum, int *average, int *standard_derivation)
{
    int f, g, h, i, j, variance;
    
    *sum = a + b + c + d + e;
    *average = *sum / 5;

    f = sqrt(a - (*average));
    g = sqrt(b - (*average));
    h = sqrt(c - (*average));
    i = sqrt(d - (*average));
    j = sqrt(e - (*average));

    variance = (f + g + h + i + j) / 5;

    *standard_derivation=sqrt(variance);

}
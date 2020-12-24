//To print 1 to 100 numbers without loop
//Author Aakash  Date 18 Dec 2020

#include <stdio.h>

int main()
{
    static int number = 1;
    if (number <= 100)
    {
        printf("%d ", number++);
        main();
    }
    return 0;
}
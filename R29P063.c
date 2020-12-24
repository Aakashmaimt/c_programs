//Program to calculate how much we have to grade according to the subjects in which he/she fail by switch case 
//Author Aakash Date 21 Dec 2020
#include<stdio.h>

int main()
{
    int class,fail_subjects;
    printf("Enter the class of the student :");
    scanf("%d",&class);

    switch(class)
    {
        case 1:
        {
            printf("Enter in how many subject the student is fail :");
            scanf("%d",&fail_subjects);

            if(fail_subjects>3)
            {
                printf("He/she does not get any grace.");
            }
            else
            {
                printf("He/she got grace of 5 marks in each subject.");
            }
            break;
        }
        case 2:
        {
            printf("Enter in how many subject the student is fail :");
            scanf("%d",&fail_subjects);

            if(fail_subjects>2)
            {
                printf("He/she does not get any grace.");
            }
            else
            {
                printf("He/she got grace of 4 marks in each subject.");
            }
            break;
        }
        case 3:
        {
            printf("Enter in how many subject the student is fail :");
            scanf("%d",&fail_subjects);

            if(fail_subjects>1)
            {
                printf("He/she does not get any grace.");
            }
            else
            {
                printf("He/she got grace of 5 marks in each subject.");
            }
            break;
        }
        default:
        {
            printf("Wrong input !");
        }
    }
    return 0;
}
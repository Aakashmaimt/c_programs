//Program to check whether given character is a vowel or consonant or non-alphabet
//Author Aakash  Date October 23,2020
#include<stdio.h>

int main()
  {
     char ch;
     printf("Enter any single character :");
     scanf("%c",&ch);

     if(((ch>=65) && (ch<=90)) || ((ch>=97)&&(ch<=122)))
        {
           if((ch==65) || (ch==97) || (ch==69) || (ch==101) || (ch==73) || (ch==105) || (ch==79) || (ch==111) || (ch==85) || (ch==117))
              {
                 printf("Character is a vowel");
              }
           else
              {
                 printf("Character is a consonant");
              }
        }
     else
        {
           printf("Entered character is not an alphabet");
        }
      return 0;
  }

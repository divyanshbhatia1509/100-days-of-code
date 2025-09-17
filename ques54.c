/*

Q54 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:

*

***

*****
*******
***

*                   */

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=7;i=i+2)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");            ;
        }
        if(i==5 || i==7)
        printf("\n");
        else
        printf("\n\n");
    }
    for(i=3;i>=1;i=i-2)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n\n");
    }
}
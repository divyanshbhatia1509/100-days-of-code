/*
Q55 (Nested Loops without Arrays/Strings)
Write a program to print all the prime numbers from 1 to n.
*/


#include<stdio.h>
int main ()
{
    int num,i,j,k=0;
    printf("enter num :- ");
    scanf("%d",&num);
    printf("the prime numbers between 1 and %d are :- ",num);
    for(i=2;i<=num;i++)
    {
        k=0;
        
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            k++;
        }
        if(k==1)
        printf("%d ",i);
    }
}
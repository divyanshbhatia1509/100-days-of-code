/*Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.*/

#include<stdio.h>
int main ()
{
    float i,k=3,n,sum=0;
    printf("Enter number of terms of series you want to calculate :- ");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
{


    sum = sum + ((2*i)/k);
    k=k+4;
}
printf(" The sum os series upto %.2f terms is %.2f",n,sum);
    return 0;
}
/*Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.*/

#include<stdio.h>
int main()
{
float i,j=1,n,sum=1.0;
printf("enter number of terms of series you want to calculate :- ");
scanf("%f",&n);
for (i=2;i<=n;i++)
{
    j=j+2;
    sum= sum+(j/(2*i));
}
printf("The sum of series upto %.2f terms is %.2f",n,sum);

}
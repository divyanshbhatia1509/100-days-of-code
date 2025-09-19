/*
Q57 (Arrays (1D))
Find the sum of array elements.*/

#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the number of elements you want to enter in array : - ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the %d elements in an array : - ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        sum=sum+array[i];
    }
    printf("The sum of elements of array is %d",sum);

   return 0;
}
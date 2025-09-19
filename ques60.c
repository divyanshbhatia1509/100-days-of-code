/*Q60 (Arrays (1D))
Count positive, negative, and zero elements in an array.*/

#include<stdio.h>
int main()
{
    int i,n,positive=0,negative=0,zero=0;
    printf("Enter the number of elements you want to enter in an array :- ");
    scanf("%d",&n);
    int array[n];
    printf("Enter %d elements in array :- ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        if(array[i]>0)
        positive++;
        else if(array[i]<0) 
        negative++;
        else
        zero++;
    }
    printf("The total positive elementsin an array are :- %d",positive);
    printf("\nThe total negative elements in an array are :- %d",negative);
     printf("\nThe total zero elementsin an array are :- %d",zero);
    return 0;
}
/*Q56 (Arrays (1D))
Read and print elements of a one-dimensional array.
*/

#include<stdio.h>
int main ()
{
    int n,i;
    printf("Enter the number of elements you want to enter in array :- ");
    scanf("%d",&n);
    int array[n];
    printf("\nEnter %d elements in array :- ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);

    }
    printf("\nThe elemts entered are :- ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
}
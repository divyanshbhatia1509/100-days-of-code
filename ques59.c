/*Q59 (Arrays (1D))
Count even and odd numbers in an array.*/

#include<stdio.h>
int main()
{
    int i,n,odd=0, even=0;
    printf("Enter the number of elements you want to enter in an array :- ");
    scanf("%d",&n);
    int array[n];
    printf("Enter %d elements in array :- ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        if(array[i]%2==0)
        even++;
        else 
        odd++;
    }
    printf("The total even elementsin an array are :- %d",even);
    printf("\nThe total odd elements in an array are :- %d",odd);
    return 0;
}
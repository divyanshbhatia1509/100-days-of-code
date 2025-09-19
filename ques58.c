/* Q58 (Arrays (1D))
Find the maximum and minimum element in an array.*/

#include<stdio.h>
int main()
{
    int i,n,max,min;
    printf("Enter the number of elements you want to enter :- ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the %d elements in an array :- ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<(n-1);i++)
    {
        
        if(array[i]>array[i+1])
         max=array[i]; 
        else
        max=array[i+1]; 
        
    
    if (array[i]<array[i+1])
    min=array[i];
    else 
    min=array[i+1];
        
    

}
printf("The maximum element in array is %d ",max);
   printf("\nThe miniimum element in array is %d  ",min);
   return 0;
}
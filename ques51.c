/*Q51 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
5
45
345
2345
12345   */

#include<stdio.h>
int main()
{
    int i,j,n=5;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {

            printf("%d",n);
            n++;
            
        }
        printf("\n");
        n=j;
    }
    return 0;
}
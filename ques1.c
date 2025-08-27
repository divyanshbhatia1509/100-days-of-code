/*Q1 (User Inputs, Operations & Output)
Write a program to input two numbers and display their sum.*/


#include <stdio.h>
int main()
{
    int a, b, sum;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("The sum is: %d\n", sum);
    return 0;
}

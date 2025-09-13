/*Write a program to check if a number is a strong number.*/


#include <stdio.h>
int main()
{
    int i,j,num,num1,a,p=1,sum=0;

    // entering the number you want to check.
    printf("Enter a number :- ");

    scanf("%d",&num);

    // storing number in num1 for further checking later
    num1=num;

    while(num!=0)
    {
        a=num%10;   //finding the digits of number
        num=num/10;
    if(a==0)
    a=1;
    for(i=1;i<=a;i++)
    {
        p=p*i;  // factorial of individual digits
        
    }
   
    sum =sum+p;     //adding the factorial of individual digits 
     p=1;           // re initilising the p for factorial calculation
    }
    printf("%d",sum);
    if(num1==sum)
    printf("It is a strong number");
    else 
    printf("Not an strong number");
    return 0;
}
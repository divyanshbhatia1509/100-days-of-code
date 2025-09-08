/*Write a program to find the HCF (GCD) of two numbers.*/

#include<stdio.h>
int main(){
    int num1,num2,i,a,b,c=0,d,max;
    printf("enter a number ");
    scanf("%d",&num1);
    scanf("%d",&num2);
    max =  (num1>num2)? num1:num2;
    for(i=1;i<=max;i++)
    {
        a = num1%i;
       b = num2%i;
       if (a==0 && b==0)
       {
        if(i>c)
        d=i;
       }
       c=i;
    }
    printf("hcf is %d",d);
}

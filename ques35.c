/*Write a program to print all factors of a given number.*/

# include<stdio.h>
int main(){
    int num,a,i;
    printf("enter a number ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
    a=num%i;
    if(a==0)
    printf(" %d",i);
    }

}
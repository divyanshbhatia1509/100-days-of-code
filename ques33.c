/*Write a program to check if a number is an Armstrong number.*/

# include<stdio.h>
int main(){
    int a,i=0,b,c,n,d=0,e,f,g;
    printf("enter a number");
    scanf("%d",&a);
    f=a;
    g=a;
    do
    {
       b= a/10;
       a=b;
       n++; 
    } while (b!=0);
    
    for(i=0;i<=n;i++)
    {
        c=f%10;
        e=f/10;
        d = d+(c*c*c);
        f=e;
    }
    if (g==d)
    printf("it is armstrong number");
    else
    printf("not an armstrong number ");

}
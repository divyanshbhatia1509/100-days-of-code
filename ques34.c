/*Write a program to check if a number is prime.*/

# include<stdio.h>
int main(){
    int num,i,a;
    printf("enter a number  ");
    scanf("%d",&num);
    int j,k;
    j=0;k=0;
    if (num==2||num==5||num==7)
    printf("prime number");
    else{
    for(i=2;i<=7;i++)

    {
        a=num%i;
        if(a==0)
        j++;
        
    }
    if(j<=0)
    printf(" prime number");
    else
    printf("not  prime");
}
}
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter the value of :");
    scanf("%d",&n);
    while(n>0)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    printf("Sum of numbers %d",sum);
}


//Amstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits. ex : 153 = (1*1*1)+(5*5*5)+(3*3*3)

#include<stdio.h>  
int main()    
{    
    int n,r,sum=0,temp;    
    printf("Enter the value of n:");
    scanf("%d",&n); 
    temp=n; 
    while(n>0)    
    {    
        r=n%10;  //Give us the last digit or unit digit  
        sum=sum+(r*r*r);    
        n=n/10;  //Removes the last digit  
    }    
    if(temp==sum)    
    printf("armstrong  number ");    
    else    
    printf("not armstrong number");    
    return 0;  
}   
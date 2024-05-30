//palindrome --> the reverse of a number is same as orginal number
#include<stdio.h>  
int main()    
{    
    int n,rev=0,temp;    
    printf("Enter the value of n:");
    scanf("%d",&n); 
    temp=n; 
    while(n>0)    
    {    
        rev=rev*10;  
        rev=rev+(n%10);    
        n=n/10;  //Removes the last digit  
    }    
    if(temp==rev)    
    printf("Palindrome ");    
    else    
    printf("not a palindrome");    
    return 0;  
}   
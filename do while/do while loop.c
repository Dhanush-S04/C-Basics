// do while loop -- exit control loop.loop executes at least once enough the condition is false.The condition is checked only after the first execution.

// Factorial using do while loop

#include <stdio.h>
int main()
{
    int i=1,n,fact=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    do
    {
        fact=fact*i;
        i++;
    }
    while(i<=n);
    printf("factorial: %d",fact);
    return 0;
}

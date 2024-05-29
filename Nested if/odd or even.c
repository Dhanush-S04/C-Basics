#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num % 2 == 0)
    {
        if(num>=0)
        {
            printf("Even number");
        }
        else
        {
            printf("odd number");
        }
    }
}
 
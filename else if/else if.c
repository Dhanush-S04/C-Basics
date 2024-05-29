#include <stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("A is greater");
    }
    else if(b>a)
    {
        printf("B is greater");
    }
    else if(a==b || b==a)
    {
        printf("A and B are equal");
    }
    else{
        printf("False");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int num1, num2;
    char op;
    printf("Enter num1: ");
    scanf("%d",&num1);
    
    printf("Enter num2: ");
    scanf("%d",&num2);
    
    printf("Enter operator: ");
    scanf("\n%c",&op);
    
    switch(op)
    {
        case '+':
        printf("Sum: %d",num1+num2);
        break;
        
        case '-':
        printf("Subtract: %d",num1-num2);
        break;
        
        case '*':
        printf("Multiply: %d",num1*num2);
        break;
        
        case '/':
        printf("Divide: %d",num1/num2);
        break;
        
        case '%':
        printf("Modulo: %d",num1%num2);
        break;
        
        dafault:
        printf("Invalid operator");
    }
}
 
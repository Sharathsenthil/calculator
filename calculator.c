#include<stdio.h>
int main()
{
    int a,b;
    char x;
    printf("enter symbol:");
    scanf("%c",&x);
    printf("enter number:");
    scanf("%d %d",&a,&b);
    switch(x)
    {
        case '+': printf("addition = %d",a+b);
                    break;
        case '-': printf("subtraction = %d",a-b);
                    break;
        case '*': printf("multiplication = %d",a*b);
                    break;
        case '/': printf("division = %d",a/b);
                    break;
        case '%': printf("remainder = %d",a%b);
                    break;
    }
    return 0;
}

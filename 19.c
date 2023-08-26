#include<stdio.h>
int main()
{
    int a;
    int b;
    char op;
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter Second number:");
    scanf("%d", &b);
    printf("Enter operator:");
    scanf("%s", &op);
    switch(op){
        case '+':
        printf("%d", a+b);
        break;
        case '-':
        printf("%d", a-b);
        break;
        case '/':
        printf("%d", a/b);
        break;
        case '*':
        printf("%d", a*b);
        break;
    }
return 0;


}
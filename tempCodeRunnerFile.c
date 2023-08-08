#include<stdio.h>
#include<string.h>
int main()
{
    char a[30]="CodeChef ";
    char b[10]="Is Great!";
    strcat(a, b);
    printf("%s\n", a);
    return 0;
}
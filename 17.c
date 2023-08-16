#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    char str[30];
    char N[20];
    int age;
    
    printf("Enter your Name:");
    scanf("%s\n", N);
    printf("enter your age:");
    scanf("%d\n", &age);
    printf("Enter your academy:");
    scanf("%s\n", str);
    printf("Your name is %s\n", N);
    printf("You are %d years old\n", age);
    printf("Your academy goes by the name", str);

    return 0;


}
#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char str[50]= "Logic is very ";
    char arr[]= "Important in life!";

    strcat(str, arr);
    printf("What is very important in life ?\n");
    printf("%s\n", str);
    return 0;

}
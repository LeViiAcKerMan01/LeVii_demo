#include<stdio.h>
#include<string.h>
#include<math.h>

int main()

{
    //concatenation of two strings taken as input from the user!
    char A[50];
    char B[10];

    printf("Enter first string:");
    scanf("%s", A);
    printf("Enter second string:");
    scanf("%s", B);
    strcat(A, B);
    printf("%s\n", A);
    printf("%d\n", strlen(A));//strlen() for the length of the string!
    printf("%f\n", strlen(A)/5);
    return 0; 
} 
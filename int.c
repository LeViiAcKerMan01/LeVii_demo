#include<stdio.h>
#include<math.h>

int main()
{

    int A,B,t;
    int i=1;
    scanf("%d", &t);
    while(i<=t)
    {
        scanf("%d %d", &A , &B);
        printf("%d\n", A+B);
        i=i+1;
    }
    return 0;
}
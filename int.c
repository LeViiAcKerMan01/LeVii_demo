#include<stdio.h>
#include<math.h>

int main()
{

    int A,B,t;
    int i;
    scanf("%d\n",t);
    while(i<=t)
    {
        scanf("%d %d", &A , &B);
        printf("%d\n", A+B);
        i=i++;
    }
    return 0;
}
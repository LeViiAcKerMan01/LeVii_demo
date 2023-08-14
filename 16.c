#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int t,A,B;
    int i=1;
    int C;
    scanf("%d", &t);

    while(i<=t)
    {
        scanf("%d %d", &A, &B);
        C=A+B;
        
        printf("%d\n", C);
        i=i+1;
    }
    return 0;

}
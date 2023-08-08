#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int t,A,B,C,D,E;
    int i;
    scanf("%d\n", &i);
    scanf("%d", &t);
    while(i=t){
        scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
        int N=A+B+C+D+E;
        printf("%d\n", N);
        return 0;
    }
}
//solved thisone as well!
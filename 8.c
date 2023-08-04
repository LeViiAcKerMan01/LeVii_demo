#include<stdio.h>
int main()
{
    int t;
    int N,X;
    int i=1;
    scanf("%d", &t);
    while(i<=t){
        int B=N-X;
        scanf("%d %d %d", &N, &X, &B);

        if(B>X){
            printf("%d\n", X);
        }
        else if(X>B){
            printf("%d\n", B);
        }
        else{
            printf("%d\n", 0);
        }
        i=i+1;
    }
    return 0;
}
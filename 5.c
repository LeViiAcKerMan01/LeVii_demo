#include <stdio.h>

int main() {
    int t;
    int N,X;
    scanf("%d", &t);
    while(t--){
       scanf("%d %d", &N, &X);
       int b=N-X;
       if(b>X){
           printf("%d\n", &X);
           
       }
       else if(X>b){
           printf("%d\n", N-X);
       }
       else if(X=b){
           printf("%d\n", 0);
       }
       else{
        printf("OK!");
       }
    }
    return 0;
}
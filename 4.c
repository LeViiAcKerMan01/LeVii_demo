#include<stdio.h>
int main(){
    int t;
    int X;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &X);
        if(X%3==0){
            printf("%d\n", 0);
        }
        else if((X+1)%3==0){
            printf("%d\n", 1);
        }

    }

}
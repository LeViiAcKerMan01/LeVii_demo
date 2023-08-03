#include<stdio.h>
int main(){
    int t;
    int X,Y,Z;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d %d", &X, &Y, &Z);
        if(Z%X==0 && Z%Y==0){
            printf("ANY\n");
        }
        else if(Z%X==0){
            printf("CHICKEN\n");
        }
        else if(Z%Y==0){
            printf("DUCK\n");
        }

    }
}
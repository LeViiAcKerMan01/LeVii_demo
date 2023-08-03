#include<stdio.h>
int main(){
    int t;
    int X,Y,Z;
    scanf("%d", &t);      // FARM ANIMALS!
    while(t--){
        scanf("%d %d %d", &X, &Y, &Z);
        if(Z%X==0 && Z%Y==0){
            printf("ANY\n");  // Either CHICKEN or DUCK
        }
        else if(Z%X==0){
            printf("CHICKEN\n"); // Only CHICKEN
        }
        else if(Z%Y==0){
            printf("DUCK\n");  // Only DUCK
        }
        else{
            printf("NONE\n");  // Neither CHICKEN nor DUCK
        }

    }
    return 0;
}
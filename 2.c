#include<stdio.h>
int main(){
    int t;
    int A,B;
    int i=1;
    scanf("%d", &t);
    while(i<=t){
        scanf("%d %d", &A, &B);
        if(A/B==B/A && A==B){
            printf("Both %d and %d are Equal!", A, B);
        }
        else if(A/B==B/A){
            printf("Both %d and %d are Proportional to each other!", A, B);
        }
        else{
            printf("Both %d and %d are Not Equal!", A, B);
        }
        i=i+1;

    }
    return 0;
}
// Ohh my Godd! 

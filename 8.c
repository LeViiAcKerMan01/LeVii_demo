#include<stdio.h>

int main()
{
    int t,A,B;
    int i=1;
    scanf("%d", &t);
    while(i<=t){
        scanf("%d %d", &A, &B);
        if(A%2==0 && B%2==0){
            printf("%d\n", ((A+B)/2));
        }
        else if(A%2!=0 && B%2!=0){
            printf("%d\n", ((A+B)/2));
        }
        else{
            printf("%d\n", -1);
        }
        i=i+1;
        
    }
    return 0;
}
//Great man!! What the Heck! I did a new invention Mom! ohh My Godd!
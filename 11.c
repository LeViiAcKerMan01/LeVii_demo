#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int A,B,C,D,E;
    int a[10];
    int i=6;
    int t;
    int N;
    scanf("%d", &t);
    if(i=t){
        scanf("%d %d %d %d %d %d", &a[1], &a[2], &a[3], &a[4], &a[5], &a[6]);
        N= a[1]+a[2]+a[3]+a[4]+a[5]+a[6];
        printf("%d\n",N);
    }
    return 0;
}
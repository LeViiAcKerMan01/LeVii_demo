#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int n,a,A,b,B,c,C,d,D,e,E,F;

    a=n/10000;
    A=n%10000;

    b=A/1000;
    B=A%1000;

    c=B/100;
    C=B%100;

    d=C/10;
    D=C%10;

    e=D/1;

    F=a+b+c+d+e;


    if(A>=1000 && B>=100){


        printf("%d\n", F);    
    }
   

    return 0;
}
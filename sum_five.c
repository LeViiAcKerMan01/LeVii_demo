#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int n,a,A,b,B,c,C,d,D,F;
    scanf("%d", &n);
    if(n>=10000 && A>=1000)
    {
        a=n/10000;
        A=n%10000;
        printf("%d\n", a);
        printf("%d\n", A);

        b=A/1000;
        B=A%1000;
        printf("%d\n", b);
        printf("%d\n", B);
        
        if(B>=100 && C>=10)
        {
        c=B/100;
        C=B%100;
        printf("%d\n", c);
        printf("%d\n", C);

        d=C/10;
        D=C%10;
        printf("%d\n", d);
        printf("%d\n", D);
        
        if(D>=1)
        {
            F=a+b+c+d+D;
            printf("%d\n", F);
        }

        }


    }
    else if(A<1000 && B<100)
    {
        b=A/100;
        B=A%100;
        printf("%d\n", b);
        printf("%d\n", B);

    
        
        c=B/10;
        C=B%10;
        printf("%d\n", c);
        printf("%d\n", C);

        if(B<=10)
        {
            c=B/1;
            C=B%1;
            printf("%d\n", b);
            printf("%d\n", B);
            
            F=A+B+c;
            printf("%d\n", F);

        }
    else if(A<1000 && B<10)
    {
        

    }

        
    }

    
    return 0;
}
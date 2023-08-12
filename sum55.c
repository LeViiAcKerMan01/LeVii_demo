#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    int a,b,c;

    scanf("%d", &n);
    a=n/10000;
    b=a%1000;
    c=b/100;
    if(a>=1 && b>=1 && c>=1){
        
        
        printf("%d\n", a+b+c);
    }
    
    return 0;
}
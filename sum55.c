#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    int a,b,c;

    scanf("%d", &n);
   // a=n/10000;
   // b=a/1000;
     
   // c=a+b;
    
    if(a>=1 && b>1){
        a=n/10000;
        b=a/1000;
     
        c=a+b;
        
        
        printf("%d\n", c);
    }
    
    return 0;
}
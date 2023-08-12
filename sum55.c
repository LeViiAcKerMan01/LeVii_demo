#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    int a,b;
   
    
    scanf("%d", &n);
    
    
    if(a>=1 && b>=1){
        a=n/10000;
        b=a/1000;
        
        printf("%d\n", a+b);
    }
    
    return 0;
}
#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int a[]={2,4,6,8,10,54};
    
    a[0]=43;
    printf("%d\n", a[0]+a[5]);
    return 0;
}
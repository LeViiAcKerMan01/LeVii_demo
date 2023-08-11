#include <stdio.h>
#include <conio.h>
 
 
int main()
{
    int a[1000],i,n,sum=0;
   
    scanf("%d",&n);
 
    for(i=0; i<n; i++)
    {
        scanf("%d\t", &a[i]);
        sum+=a[i];
    }
 
    return 0;
}
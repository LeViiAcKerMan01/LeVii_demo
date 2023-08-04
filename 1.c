#include<stdio.h>
int main()
{
int A,B,C;
int t;
B=(A+C)/2;
scanf("d", &t);
while(t--){
if(A%2==0 && C%2==0)
{
printf("%d\n", B);
}
else if(A%2!=0 && C%2!=0)
{
printf("%d\n", B);
}
else
{
printf("%d\n", -1);
}
}
return 0;
}
//Great man!! What the Heck! I did a new invention Mom! ohh My Godd!
#include<stdio.h>
int main(){
    int X,Y;
    int twice_time;    //  Twice Speed........2X
    int time_left;     //  Time left and still to watch.
    int total_time;    //  Total time to watch a movie!
    scanf("%d %d", &X, &Y);
    twice_time=Y/2;
    time_left=X-Y;
    total_time= twice_time+time_left;
    printf("%d\n", total_time);
    return 0;
}
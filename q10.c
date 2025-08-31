#include <stdio.h>
int main() {
    int totalTime, hours,minutes,seconds;
    printf("enter time in seconds");
    scanf("%d",&totalTime);
    hours= totalTime/3600;
    minutes=(totalTime%3600)/60;
    seconds=(totalTime%60);
    printf("time is %02d:%02d:%02d",hours,minutes,seconds);

    return 0;
}
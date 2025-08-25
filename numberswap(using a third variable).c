#include <stdio.h>
int main () {
    int a,b,c;
    printf("enter value number");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("after swapping a=%d,b=%d",a,b);
    return 0;

}

#include <stdio.h>
int main(){
    printf("enter any two numbers \n");
    int a,b ;
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap:a=%d,b=%d",a,b);
    return 0;
}

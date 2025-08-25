#include<stdio.h>
int main() {
    printf("give any two numbers \n");
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=a + b;
    int difference=a - b;
    int product=a*b;
    int quotient=a/b;
    printf("sum=%d,difference=%d,product=%d,quotient=%d",sum,difference,product,quotient);
    return 0;

}
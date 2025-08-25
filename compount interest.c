#include <stdio.h>
int main (){
    float principal, rate, time;
    float compoundinterest , amount , simpleinterest;
    printf("enter principal amount");
    scanf("%f",&principal);
    printf("enter rate of interest");
    scanf("%f",&rate);
    printf("enter time");
    scanf("%f",&time);
    simpleinterest=(principal*rate*time)/100;
    amount=principal*pow((1+ rate/100),time);
    compoundinterest=amount-principal;
    printf("\n the simpleinterest is =%.2f \n",simpleinterest);

    printf("\n the compoundinterest is =%.2f \n",compoundinterest);

    return 0;
}
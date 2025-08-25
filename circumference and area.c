#include<stdio.h>
int main() {
    printf("enter radius of circle \n");
    float r,area, circumference;
    #define pi 3.14159265359
    scanf("%f",&r);
    area=pi*r*r;
    circumference=2*pi*r;
    printf("area=%.2f,circumference=%.2f",area,circumference);
    return 0;

    


   

}
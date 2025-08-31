#include<stdio.h>
int main() {
	printf("give temperature in celsius \n");
	float celsius;
	scanf("%f",&celsius);
	float farenhite= (celsius * 9/5) + 32;
	printf("the value of temperature in farenhite is:%f",farenhite);
	
	return 0;
	
}

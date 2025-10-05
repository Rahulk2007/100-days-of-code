#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    int original = num;

    
    digits = (int)log10(num);

    
    firstDigit = num / pow(10, digits);
    lastDigit = num % 10;

    
    swappedNum = lastDigit * pow(10, digits) + (num % (int)pow(10, digits)) / 10 * 10 + firstDigit;

    printf("Original number = %d\n", original);
    printf("Number after swapping first and last digit = %d\n", swappedNum);

    return 0;
}

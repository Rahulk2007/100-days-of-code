#include <stdio.h>

int main() {
    long num;
    int digit, i;
    int count[10] = {0};  
    printf("Enter an integer number: ");
    scanf("%ld", &num);

    if (num < 0) {
        num = -num;  
    }

    
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    
    int maxCount = count[0];
    int mostFrequentDigit = 0;
    for (i = 1; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequentDigit = i;
        }
    }

    printf("The digit that occurs most frequently is: %d (appeared %d times)\n", mostFrequentDigit, maxCount);

    return 0;
}

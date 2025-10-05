#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    float numerator = 1.0, denominator = 2.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += numerator / denominator;
        numerator += 2;   // next odd number
        denominator += 2; // next even number
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}

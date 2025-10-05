#include <stdio.h>

int main() {
    char binary[50];
    int i;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Calculate 1's complement
    for (i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else {
            printf("Invalid binary number!\n");
            return 0;  // Exit if input is not binary
        }
    }

    printf("1's Complement = %s\n", binary);

    return 0;
}

#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

   
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = str[i];

     
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
       
        else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}

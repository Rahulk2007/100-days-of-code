#include <stdio.h>

int main() {
    char str[100];
    int i, j;

   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

   
    for (i = 0, j = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = str[i];

       
        char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

        if (lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u') {
            str[j++] = str[i];  
        }
    }
    str[j] = '\0'; 

   
    printf("String after removing vowels: %s\n", str);

    return 0;
}

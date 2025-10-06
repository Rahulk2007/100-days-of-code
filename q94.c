#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char longest[100];
    int maxLength = 0;

    
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int i = 0, start = 0, length = 0;

    while (1) {
        if (sentence[i] != ' ' && sentence[i] != '\0' && sentence[i] != '\n') {
            length++;  
        } else {
            if (length > maxLength) {
                maxLength = length;
                strncpy(longest, &sentence[start], length);
                longest[length] = '\0';  
            }
            length = 0;
            start = i + 1; 
        }

        if (sentence[i] == '\0' || sentence[i] == '\n') {
            break;
        }

        i++;
    }

   
    printf("The longest word is: %s\n", longest);
    printf("Length of the longest word: %d\n", maxLength);

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseRange(char *s, int left, int right) {
    while (left < right) {
        char tmp = s[left];
        s[left] = s[right];
        s[right] = tmp;
        left++; right--;
    }
}

int main() {
    char line[1000];

    printf("Enter a sentence:\n");
    if (fgets(line, sizeof(line), stdin) == NULL) return 0;

    
    size_t len = strlen(line);
    if (len > 0 && line[len-1] == '\n') {
        line[len-1] = '\0';
        len--;
    }

    int i = 0;
    while (i < (int)len) {
       
        while (i < (int)len && isspace((unsigned char)line[i])) i++;

      
        int start = i;
        while (i < (int)len && !isspace((unsigned char)line[i])) i++;
        int end = i - 1;

        if (start <= end) {
            reverseRange(line, start, end);
        }
        
    }

    printf("Result:\n%s\n", line);
    return 0;
}

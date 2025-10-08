#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, len;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    
    len = strlen(name);
    if (name[len - 1] == '\n')
        name[len - 1] = '\0';

    printf("Result: ");

    
    for (i = 0; i < len; i++) {
        if (i == 0) {
            printf("%c.", name[i]);  
        }
        else if (name[i] == ' ' && name[i + 1] != '\0') {
            
            int j = i + 1;
            while (name[j] != ' ' && name[j] != '\0')
                j++;
            if (name[j] == '\0') {  
                printf("%s", &name[i + 1]);
                break;
            } else {
                printf("%c.", name[i + 1]);
            }
        }
    }

    printf("\n");
    return 0;
}

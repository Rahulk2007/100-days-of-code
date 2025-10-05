#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; 

 
    for (i = 1; i <= rows; i += 2) {  
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    
    for (i = rows - 2; i >= 1; i -= 2) { 
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

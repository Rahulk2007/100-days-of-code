#include <stdio.h>

int main() {
    int rows, cols, i, j, k, distinct = 1;

   
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

  
    int n = (rows < cols) ? rows : cols; 
    int diagonal[n];


    for (i = 0; i < n; i++) {
        diagonal[i] = matrix[i][i];
    }

 
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (diagonal[i] == diagonal[j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct)
            break;
    }


    printf("\nThe entered matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    
    printf("\nDiagonal elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", diagonal[i]);
    }

 
    if (distinct)
        printf("\n\nAll diagonal elements are distinct.\n");
    else
        printf("\n\nDiagonal elements are NOT distinct.\n");

    return 0;
}

#include <stdio.h>

int main() {
    int m, n, p, q;

    
    printf("Enter number of rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);

   
    printf("Enter number of rows and columns of second matrix: ");
    scanf("%d %d", &p, &q);

    
    if (n != p) {
        printf("\nMatrix multiplication not possible! Columns of first matrix must equal rows of second matrix.\n");
        return 0;
    }

    int A[m][n], B[p][q], C[m][q];

    
    printf("\nEnter elements of first matrix (A):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    
    printf("\nEnter elements of second matrix (B):\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }

    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    
    printf("\nProduct of the two matrices (A × B):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

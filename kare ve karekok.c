#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j,k;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    // Girilen nxn matrisi olu�turun
    int A[n][n];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // B ve C matrislerini olu�turun
    int B[n][n], C[n][n];

    // B matrisini olu�turun
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            B[i][j] = A[i][j] * A[i][j];
        }
    }

    // C matrisini olu�turun
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            C[i][j] = sqrt(A[i][j]);
        }
    }

    // D matrisini olu�turun
    int D[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            D[i][j] = 0;
            for ( k = 0; k < n; k++) {
                D[i][j] += B[i][k] * C[k][j];
            }
        }
    }

    // D matrisini ekrana yazd�r�n
    printf("Resulting matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", D[i][j]);
        }
        printf("\n");
    }

    return 0;
}

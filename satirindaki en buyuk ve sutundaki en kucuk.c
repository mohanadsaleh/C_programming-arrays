#include <stdio.h>

int main() {
    int n, i, j;
    printf("Matrisin boyutunu girin: ");
    scanf("%d", &n);

    // Girilen nxn matrisi oluþturun
    int A[n][n];

    printf("Matrisin elemanlarýný girin:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // B ve C dizilerini oluþturun
    int B[n], C[n];

    // B dizisini oluþturun
    for (i = 0; i < n; i++) {
        int max = A[i][0];
        for (j = 1; j < n; j++) {
            if (A[i][j] > max) {
                max = A[i][j];
            }
        }
        B[i] = max;
    }

    // C dizisini oluþturun
    for (j = 0; j < n; j++) {
        int min = A[0][j];
        for (i = 1; i < n; i++) {
            if (A[i][j] < min) {
                min = A[i][j];
            }
        }
        C[j] = min;
    }

    // B ve C dizilerinin skaler çarpýmýný hesaplayýn
    int result = 0;
    for (i = 0; i < n; i++) {
        result += B[i] * C[i];
    }

    printf("Result: %d\n", result);

    return 0;
}

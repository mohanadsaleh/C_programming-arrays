#include <stdio.h>

int main() {
    // Matrisin sat�r ve s�tun say�s�n� tan�mlay�n
    int satir = 4, sutun = 5;
	int i,j;
    // Matrisi olu�turun ve kullan�c�dan de�erleri okuyun
    int A[satir][sutun];
    for ( i = 0; i <satir; i++) {
        for (j = 0; j < sutun; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Matrisin tek s�radaki sat�rlar�n� (1, 3, 5, ...) gezinerek, ilgili sat�rlar�n yerlerini de�i�tirin
    for ( i = 0; i <satir; i += 2) {
        for (j = 0; j < satir; j++) {
            int temp = A[i][j];
            A[i][j] = A[i+1][j];
            A[i+1][j] = temp;
        }
    }

    // De�i�tirilen matrisi ekrana yazd�r�n
    for ( i = 0; i < satir; i++) {
        for ( j = 0; j < sutun; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}

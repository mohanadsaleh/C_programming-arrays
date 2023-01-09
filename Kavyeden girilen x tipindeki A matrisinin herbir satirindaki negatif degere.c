#include <stdio.h>

int main() {
    // A matrisinin sat�r ve s�tun say�s�n� tan�mlay�n
    int row = 3, col = 4;
    int i,j;

    // A matrisini olu�turun ve kullan�c�dan de�erleri okuyun
    int A[row][col];
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // B dizisini olu�turun ve her sat�r i�in negatif eleman say�s�n� s�f�r olarak ba�lat�n
    int B[row];
    for ( i = 0; i < row; i++) {
        B[i] = 0;
    }

    // A matrisinin her sat�r�n� gezinerek, negatif de�ere sahip elemanlar� say�n ve B dizisinin ilgili indeksine ekleyin
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (A[i][j] < 0) {
                B[i]++;
            }
        }
    }

    // B dizisini ekrana yazd�r�n
    for ( i = 0; i < row; i++) {
        printf("B[%d] = %d\n", i, B[i]);
    }

    return 0;
}

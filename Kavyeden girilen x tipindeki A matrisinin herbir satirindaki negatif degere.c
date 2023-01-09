#include <stdio.h>

int main() {
    // A matrisinin satýr ve sütun sayýsýný tanýmlayýn
    int row = 3, col = 4;
    int i,j;

    // A matrisini oluþturun ve kullanýcýdan deðerleri okuyun
    int A[row][col];
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // B dizisini oluþturun ve her satýr için negatif eleman sayýsýný sýfýr olarak baþlatýn
    int B[row];
    for ( i = 0; i < row; i++) {
        B[i] = 0;
    }

    // A matrisinin her satýrýný gezinerek, negatif deðere sahip elemanlarý sayýn ve B dizisinin ilgili indeksine ekleyin
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (A[i][j] < 0) {
                B[i]++;
            }
        }
    }

    // B dizisini ekrana yazdýrýn
    for ( i = 0; i < row; i++) {
        printf("B[%d] = %d\n", i, B[i]);
    }

    return 0;
}

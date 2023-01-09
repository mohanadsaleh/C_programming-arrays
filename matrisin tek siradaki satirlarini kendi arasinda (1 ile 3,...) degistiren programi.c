#include <stdio.h>

int main() {
    // Matrisin satır ve sütun sayısını tanımlayın
    int satir = 4, sutun = 5;
	int i,j;
    // Matrisi oluşturun ve kullanıcıdan değerleri okuyun
    int A[satir][sutun];
    for ( i = 0; i <satir; i++) {
        for (j = 0; j < sutun; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Matrisin tek sıradaki satırlarını (1, 3, 5, ...) gezinerek, ilgili satırların yerlerini değiştirin
    for ( i = 0; i <satir; i += 2) {
        for (j = 0; j < satir; j++) {
            int temp = A[i][j];
            A[i][j] = A[i+1][j];
            A[i+1][j] = temp;
        }
    }

    // Değiştirilen matrisi ekrana yazdırın
    for ( i = 0; i < satir; i++) {
        for ( j = 0; j < sutun; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}

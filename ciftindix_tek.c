#include <stdio.h>

int main() {
    int n,i;
    printf("N degerini girin: ");
    scanf("%d", &n);

    int a[n]; // N elemanlý bir dizi oluþturuyorum
    for ( i = 0; i < n; i++) {
        if (i % 2 == 0) { // Tek indisli elemanlar için
            a[i] = 0;
        } else { // Çift indisli elemanlar için
            a[i] = 1;
        }
    }

    printf("A dizisi: ");
    for ( i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}

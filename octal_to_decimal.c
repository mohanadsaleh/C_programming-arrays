#include <stdio.h>

int main(void) {
    // Sekizlik sayýyý tutacak deðiþken
    int octal_number;

    // Matrisi oluþturun
    int octal_to_decimal[10] = {0, 1, 10, 11, 100, 101, 110, 111, 1000, 1001};

    // Sekizlik sayýyý okuyun
    printf("Sekizlik sayiyi giriniz: ");
    scanf("%d", &octal_number);

    // Sekizlik sayýyý rakamlarýna ayýrýn ve diziye atýn
    int digits[10];
    int i = 0;
    while (octal_number > 0) {
        digits[i] = octal_number % 10;
        octal_number /= 10;
        i++;
    }
    int num_digits = i;

    // Sekizlik sayýyý ondalýk sayýya çevirin
    int decimal_number = 0;
    int power = 0;
    for (i = num_digits - 1; i >= 0; i--) {
        decimal_number += octal_to_decimal[digits[i]] * (1 << power);
        power += 3;
    }

    // Sonucu yazdýrýn
    printf("Sekizlik sayinin ondalik karsiligi: %d\n", decimal_number);
return 0;
   } 

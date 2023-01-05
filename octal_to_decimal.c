#include <stdio.h>

int main(void) {
    // Sekizlik say�y� tutacak de�i�ken
    int octal_number;

    // Matrisi olu�turun
    int octal_to_decimal[10] = {0, 1, 10, 11, 100, 101, 110, 111, 1000, 1001};

    // Sekizlik say�y� okuyun
    printf("Sekizlik sayiyi giriniz: ");
    scanf("%d", &octal_number);

    // Sekizlik say�y� rakamlar�na ay�r�n ve diziye at�n
    int digits[10];
    int i = 0;
    while (octal_number > 0) {
        digits[i] = octal_number % 10;
        octal_number /= 10;
        i++;
    }
    int num_digits = i;

    // Sekizlik say�y� ondal�k say�ya �evirin
    int decimal_number = 0;
    int power = 0;
    for (i = num_digits - 1; i >= 0; i--) {
        decimal_number += octal_to_decimal[digits[i]] * (1 << power);
        power += 3;
    }

    // Sonucu yazd�r�n
    printf("Sekizlik sayinin ondalik karsiligi: %d\n", decimal_number);
return 0;
   } 

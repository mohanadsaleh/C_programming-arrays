#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char c[100];
    int i;
    printf("Bir cumle girin: ");
    gets(c);

    int uzunluk = strlen(c);
    for ( i = 0; i < uzunluk; i++) {
        if (c[i] == ' ') { // Boþluk karakterini atlýyorum
            continue;
        }

        if (i % 2 == 0) { // Çift indisli harfler
            putchar(toupper(c[i]));
        } else { // Tek indisli harfler
            putchar(tolower(c[i]));
        }
    }

    return 0;
}

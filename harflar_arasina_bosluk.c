#include <stdio.h>
#include <string.h>

int main() {
    char kelime[100];
    int i;
    printf("Bir kelime girin: ");
    scanf("%s", kelime);

    int uzunluk = strlen(kelime);
    for (i = 0; i < uzunluk; i++) {
        putchar(kelime[i]);
        if (i < uzunluk - 1) { // Son karakter için boþluk eklemeyelim
            putchar(' ');
        }
    }

    return 0;
}

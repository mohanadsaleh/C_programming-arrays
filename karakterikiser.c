#include <stdio.h>
#include <string.h>

int main() {
    char c[100];
    int i;
    printf("Bir cumle/kelime girin: ");
    gets(c);

    int uzunluk = strlen(c);
    for ( i = 0; i < uzunluk; i++) {
        putchar(c[i]);
        putchar(c[i]);
    }

    return 0;
}

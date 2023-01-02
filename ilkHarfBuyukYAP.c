#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
	int i;
    char c[100];
    printf("Bir cumle girin: ");
    gets(c);

    int uzunluk = strlen(c);
    for ( i = 0; i < uzunluk; i++) {
        if (c[i] == ' ') { // Boþluk karakterini atlýyorum
            continue;
        }

        if (i == 0 || c[i - 1] == ' ') { // Kelimenin ilk harfi
            putchar(toupper(c[i]));
        } else {
            putchar(tolower(c[i]));
        }
    }

    return 0;
}

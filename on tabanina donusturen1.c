#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char octal[20];
    printf("Octal sayi girin: ");
    scanf("%s", octal);

    printf("Decimal karsiligi: %d\n", (int) strtol(octal, NULL, 8));

    return 0;
}

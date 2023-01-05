#include <stdio.h>

void liste_entiers(int n) {
    if (n > 0) {
        printf("%d\n", n);
        liste_entiers(n-1);
    }
}

int main(void) {
    int n;
    printf("maksimum degeri giriniz: ");
    scanf("%d", &n);
    liste_entiers(n);
    return 0;
}

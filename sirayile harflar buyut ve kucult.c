#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main() {
	int i=0;
    // Bir d�ng� olu�turun ve bu d�ng�de a�a��daki i�lemleri yap�n
    while (1) {
        // Kullan�c�dan bir mesaj girdisi al�n
        char message[100];
        printf("kelime veya cumle girinz: ");
        scanf("%s", message);

        // Girdi i�indeki her harfi, s�ras�yla ve 1 s aral�klara b�y�t�p k���l- t�rerek yukar�dan a�a��ya indirin
        for (i = 0; i < strlen(message); i++) {
            printf("%c\n", toupper(message[i]));
            sleep(1);
            printf("%c\n", message[i]);
            sleep(1);
        }
    }

    return 0;
}

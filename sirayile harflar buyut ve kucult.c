#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main() {
	int i=0;
    // Bir döngü oluþturun ve bu döngüde aþaðýdaki iþlemleri yapýn
    while (1) {
        // Kullanýcýdan bir mesaj girdisi alýn
        char message[100];
        printf("kelime veya cumle girinz: ");
        scanf("%s", message);

        // Girdi içindeki her harfi, sýrasýyla ve 1 s aralýklara büyütüp küçül- türerek yukarýdan aþaðýya indirin
        for (i = 0; i < strlen(message); i++) {
            printf("%c\n", toupper(message[i]));
            sleep(1);
            printf("%c\n", message[i]);
            sleep(1);
        }
    }

    return 0;
}

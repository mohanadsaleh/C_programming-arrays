#include <stdio.h>

int main() {
    char cumle[100];  // klavyeden girilen c�mle
    int noktalama_isaret = 0;  // noktalama i�aretleri say�s�
	int i=0;
    printf("cumle giriniz: ");
    gets(cumle); // c�mleyi oku

    // c�mledeki her bir karakteri dola�
    for ( i = 0; cumle[i] != '\0'; i++) {
        if (cumle[i] == '.' || cumle[i] == '!' || cumle[i] == '?') {
            noktalama_isaret++;  // noktalama i�areti say�s�n� bir art�r
        }
    }

    printf("noktalama isaret sayisi =: %d\n", noktalama_isaret);

    return 0;
}

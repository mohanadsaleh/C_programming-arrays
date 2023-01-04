#include <stdio.h>

int main() {
    char cumle[100];  // klavyeden girilen cümle
    int noktalama_isaret = 0;  // noktalama iþaretleri sayýsý
	int i=0;
    printf("cumle giriniz: ");
    gets(cumle); // cümleyi oku

    // cümledeki her bir karakteri dolaþ
    for ( i = 0; cumle[i] != '\0'; i++) {
        if (cumle[i] == '.' || cumle[i] == '!' || cumle[i] == '?') {
            noktalama_isaret++;  // noktalama iþareti sayýsýný bir artýr
        }
    }

    printf("noktalama isaret sayisi =: %d\n", noktalama_isaret);

    return 0;
}

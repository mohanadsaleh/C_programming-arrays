#include <stdio.h>
#include <string.h>

// kelime sýralamasý için kullanýlacak fonksiyon
void sirala(char *kelime_dizisi[], int kelime_sayisi)
{
	int i,j ;
    // kelime_sayisi tane kelime için bubble sort algoritmasý kullanýlýyor
    for ( i = 0; i < kelime_sayisi; i++)
    {
        for ( j = 0; j < kelime_sayisi - i - 1; j++)
        {
            // eðer kelime_dizisi[j] daha uzunsa, yerlerini deðiþtiriyorum
            if (strlen(kelime_dizisi[j]) > strlen(kelime_dizisi[j+1]))
            {
                char *temp = kelime_dizisi[j];
                kelime_dizisi[j] = kelime_dizisi[j+1];
                kelime_dizisi[j+1] = temp;
            }
        }
    }
}

int main()
{
	int i ;
    char cumle[100]; // girilen cümleyi tutacak dizi
    printf("Cumleyi girin: ");
    gets(cumle); // kullanýcýdan cümle alýnýyor

    int kelime_sayisi = 0; // cümledeki kelime sayýsý
    char *kelime_dizisi[50]; // cümledeki kelimeleri tutacak dizi

    // cümledeki kelimeleri ayýrýyor ve kelime_dizisi dizisine atýyorum
    char *kelime = strtok(cumle, " ");
    while (kelime != NULL)
    {
        kelime_dizisi[kelime_sayisi] = kelime;
        kelime_sayisi++;
        kelime = strtok(NULL, " ");
    }

    // kelimeleri sýralýyorum
    sirala(kelime_dizisi, kelime_sayisi);

    // sýralý kelimeleri yazdýrýyorum
    printf("Sirali kelimeler: ");
    for ( i = 0; i < kelime_sayisi; i++)
        printf("%s \n ", kelime_dizisi[i]);

    return 0;
}

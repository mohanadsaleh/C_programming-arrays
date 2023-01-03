#include <stdio.h>
#include <string.h>

// kelime s�ralamas� i�in kullan�lacak fonksiyon
void sirala(char *kelime_dizisi[], int kelime_sayisi)
{
	int i,j ;
    // kelime_sayisi tane kelime i�in bubble sort algoritmas� kullan�l�yor
    for ( i = 0; i < kelime_sayisi; i++)
    {
        for ( j = 0; j < kelime_sayisi - i - 1; j++)
        {
            // e�er kelime_dizisi[j] daha uzunsa, yerlerini de�i�tiriyorum
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
    char cumle[100]; // girilen c�mleyi tutacak dizi
    printf("Cumleyi girin: ");
    gets(cumle); // kullan�c�dan c�mle al�n�yor

    int kelime_sayisi = 0; // c�mledeki kelime say�s�
    char *kelime_dizisi[50]; // c�mledeki kelimeleri tutacak dizi

    // c�mledeki kelimeleri ay�r�yor ve kelime_dizisi dizisine at�yorum
    char *kelime = strtok(cumle, " ");
    while (kelime != NULL)
    {
        kelime_dizisi[kelime_sayisi] = kelime;
        kelime_sayisi++;
        kelime = strtok(NULL, " ");
    }

    // kelimeleri s�ral�yorum
    sirala(kelime_dizisi, kelime_sayisi);

    // s�ral� kelimeleri yazd�r�yorum
    printf("Sirali kelimeler: ");
    for ( i = 0; i < kelime_sayisi; i++)
        printf("%s \n ", kelime_dizisi[i]);

    return 0;
}

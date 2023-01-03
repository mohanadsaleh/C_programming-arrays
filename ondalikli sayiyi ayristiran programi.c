#include <stdio.h>
#include <string.h>

int main()
{
    char ondalik_sayi[20]; // ondal�kl� say�y� tutacak dizi
    printf("Ondalikli sayiyi girin: ");
    scanf("%s", ondalik_sayi); // kullan�c�dan ondal�kl� say� al�n�yor

    // ondal�kl� say� i�inde nokta varsa, bu noktadan �nceki k�sm� tam say�, sonraki k�sm� ise ondal�k say� olarak ay�r�yoruz
    int tam_sayi = 0;
    int ondalik_sayi_deger = 0;
    int i ;
    for ( i = 0; i < strlen(ondalik_sayi); i++)
    {
        if (ondalik_sayi[i] == '.')
        {
            // noktadan �nceki k�sm� tam say� olarak d�n��t�r�yoruz
            ondalik_sayi[i] = '\0';
            tam_sayi = atoi(ondalik_sayi);

            // noktadan sonraki k�sm� ondal�k say� olarak d�n��t�r�yoruz
            ondalik_sayi_deger = atoi(ondalik_sayi + i + 1);
            break;
        }
    }

    printf("Tam say: %d\n", tam_sayi);
    printf("Ondal�k sayi: %d", ondalik_sayi_deger);

    return 0;
}

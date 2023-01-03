#include <stdio.h>
#include <string.h>

int main()
{
    char ondalik_sayi[20]; // ondalýklý sayýyý tutacak dizi
    printf("Ondalikli sayiyi girin: ");
    scanf("%s", ondalik_sayi); // kullanýcýdan ondalýklý sayý alýnýyor

    // ondalýklý sayý içinde nokta varsa, bu noktadan önceki kýsmý tam sayý, sonraki kýsmý ise ondalýk sayý olarak ayýrýyoruz
    int tam_sayi = 0;
    int ondalik_sayi_deger = 0;
    int i ;
    for ( i = 0; i < strlen(ondalik_sayi); i++)
    {
        if (ondalik_sayi[i] == '.')
        {
            // noktadan önceki kýsmý tam sayý olarak dönüþtürüyoruz
            ondalik_sayi[i] = '\0';
            tam_sayi = atoi(ondalik_sayi);

            // noktadan sonraki kýsmý ondalýk sayý olarak dönüþtürüyoruz
            ondalik_sayi_deger = atoi(ondalik_sayi + i + 1);
            break;
        }
    }

    printf("Tam say: %d\n", tam_sayi);
    printf("Ondalýk sayi: %d", ondalik_sayi_deger);

    return 0;
}

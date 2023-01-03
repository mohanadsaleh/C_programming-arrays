#include <stdio.h>
#include <math.h>

int main()
{
    int sayi;
    printf("Pozitif tamsayi girin: ");
    scanf("%d", &sayi); // kullanýcýdan sayý alýnýyor

    // sayýnýn basamak sayýsýný buluyoruz
    int basamak_sayisi = (int)log10(sayi) + 1;

    // sayýyý basamak sayýsýna bölüyoruz
    int sonuc = sayi / basamak_sayisi;

    printf("Sonuc: %d", sonuc);

    return 0;
}

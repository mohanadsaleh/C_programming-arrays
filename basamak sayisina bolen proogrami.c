#include <stdio.h>
#include <math.h>

int main()
{
    int sayi;
    printf("Pozitif tamsayi girin: ");
    scanf("%d", &sayi); // kullan�c�dan say� al�n�yor

    // say�n�n basamak say�s�n� buluyoruz
    int basamak_sayisi = (int)log10(sayi) + 1;

    // say�y� basamak say�s�na b�l�yoruz
    int sonuc = sayi / basamak_sayisi;

    printf("Sonuc: %d", sonuc);

    return 0;
}

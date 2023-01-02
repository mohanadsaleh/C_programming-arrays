#include <stdio.h>

int main()
{
    int n, i;
    float A[100], B[100]; //A ve B dizileri i�in en fazla 100 eleman tutulabilece�ini varsay�yorum

    //Kullan�c�dan A dizisinin eleman say�s�n� isteyin
    printf("A dizisinin eleman sayisini giriniz: ");
    scanf("%d", &n);

    //Kullan�c�dan A dizisinin elemanlar�n� isteyin
    for (i = 0; i < n; i++)
    {
        printf("A[%d] = ", i);
        scanf("%f", &A[i]);
    }

    //A dizisinin elemanlar�n� ters s�rada ve i�arette B dizisine kopyalay�n
    for (i = 0; i < n; i++)
    {
        B[i] = A[n - i - 1];
    }

    //B dizisini ekrana yazd�r�n
    printf("\nB dizisi: ");
    for (i = 0; i < n; i++)
    {
        printf("%.2f ", B[i]);
    }

    return 0;
}

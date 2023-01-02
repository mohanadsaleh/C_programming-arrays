#include <stdio.h>

int main()
{
    int n, i;
    float A[100], B[100]; //A ve B dizileri için en fazla 100 eleman tutulabileceðini varsayýyorum

    //Kullanýcýdan A dizisinin eleman sayýsýný isteyin
    printf("A dizisinin eleman sayisini giriniz: ");
    scanf("%d", &n);

    //Kullanýcýdan A dizisinin elemanlarýný isteyin
    for (i = 0; i < n; i++)
    {
        printf("A[%d] = ", i);
        scanf("%f", &A[i]);
    }

    //A dizisinin elemanlarýný ters sýrada ve iþarette B dizisine kopyalayýn
    for (i = 0; i < n; i++)
    {
        B[i] = A[n - i - 1];
    }

    //B dizisini ekrana yazdýrýn
    printf("\nB dizisi: ");
    for (i = 0; i < n; i++)
    {
        printf("%.2f ", B[i]);
    }

    return 0;
}

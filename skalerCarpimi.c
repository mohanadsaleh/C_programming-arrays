#include <stdio.h>
#include <math.h> //sqrt fonksiyonu için gerekli olan kütüphanedir

int main()
{
    int n, i;
    float A[100], B[100], C[100], scalar_product = 0; //A, B ve C dizileri için en fazla 100 eleman tutulabileceðini varsayýyorum

    //Kullanýcýdan A dizisinin eleman sayýsýný isteyin
    printf("A dizisinin eleman sayisini giriniz: ");
    scanf("%d", &n);

    //Kullanýcýdan A dizisinin elemanlarýný isteyin
    for (i = 0; i < n; i++)
    {
        printf("A[%d] = ", i+1);
        scanf("%f", &A[i]);
    }

    //B ve C dizilerini oluþturun
    for (i = 0; i < n; i++)
    {
        B[i] = A[i] * A[i]; //karelerini alýn
        C[i] = sqrt(A[i]); //kareköklerini alýn
    }

    //B ve C dizilerinin skaler çarpýmýný hesaplayýn
    for (i = 0; i < n; i++)
    {
        scalar_product += B[i] * C[i];
    }

    //Sonuçlarý ekrana yazdýrýn
    printf("\nB dizisi: ");
    for (i = 0; i < n; i++)
    {
        printf("%.2f \n", B[i]);
    }

    printf("\nC dizisi: ");
    for (i = 0; i < n; i++)
    {
        printf("%.2f \n", C[i]);
    }
		printf("\nB ve C dizilerinin skaler çarpýmýn=%.2f",scalar_product);
}
    

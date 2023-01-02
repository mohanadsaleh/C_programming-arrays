#include <stdio.h>
#include <math.h> //sqrt fonksiyonu i�in gerekli olan k�t�phanedir

int main()
{
    int n, i;
    float A[100], B[100], C[100], scalar_product = 0; //A, B ve C dizileri i�in en fazla 100 eleman tutulabilece�ini varsay�yorum

    //Kullan�c�dan A dizisinin eleman say�s�n� isteyin
    printf("A dizisinin eleman sayisini giriniz: ");
    scanf("%d", &n);

    //Kullan�c�dan A dizisinin elemanlar�n� isteyin
    for (i = 0; i < n; i++)
    {
        printf("A[%d] = ", i+1);
        scanf("%f", &A[i]);
    }

    //B ve C dizilerini olu�turun
    for (i = 0; i < n; i++)
    {
        B[i] = A[i] * A[i]; //karelerini al�n
        C[i] = sqrt(A[i]); //karek�klerini al�n
    }

    //B ve C dizilerinin skaler �arp�m�n� hesaplay�n
    for (i = 0; i < n; i++)
    {
        scalar_product += B[i] * C[i];
    }

    //Sonu�lar� ekrana yazd�r�n
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
		printf("\nB ve C dizilerinin skaler �arp�m�n=%.2f",scalar_product);
}
    

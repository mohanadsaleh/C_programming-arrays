#include <stdio.h>
#include <stdlib.h> 



int main()
{
    int n, m, l, i;
    float A[100], B[100], C[100], D[300]; //D dizisinin en fazla 300 eleman tutulabileceðini varsayýyorum

    //Kullanýcýdan A, B ve C dizilerinin eleman sayýlarýný isteyin
    printf("A dizisinin eleman sayisini giriniz: ");
    scanf("%d", &n);
    printf("B dizisinin eleman sayisini giriniz: ");
    scanf("%d", &m);
    printf("C dizisinin eleman sayisini giriniz: ");
    scanf("%d", &l);

    //Kullanýcýdan A, B ve C dizilerinin elemanlarýný isteyin
    for (i = 0; i < n; i++)
    {
        printf("A[%d] = ", i+1);
        scanf("%f", &A[i]);
    }
    for (i = 0; i < m; i++)
    {
        printf("B[%d] = ", i+1);
        scanf("%f", &B[i]);
    }
    for (i = 0; i < l; i++)
    {
        printf("C[%d] = ", i+1);
        scanf("%f", &C[i]);
    }

    //D dizisini oluþturun ve elemanlarýný toplayýn
    for (i = 0; i < n; i++)
    {
        D[i] = A[i]+B[i]-C[i];
	}
	
	for(i=0;i<n;i++)
		printf("islem soncu =%.2f\n",D[i]);
	
}

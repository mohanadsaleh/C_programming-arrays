#include <stdio.h>

int main()
{
    int n, i;
    float A[100], sum = 0, avg, B[100], C[100]; //A dizisi için en fazla 100 eleman tutulabilecegini varsayiyorum

    //Kullanicidan A dizisinin eleman sayisini isteyin
    printf("A dizisinin eleman sayisini giriniz: ");
    scanf("%d", &n);

    //Kullanicidan A dizisinin elemanlarini isteyin ve toplamini hesaplayin
    for (i = 0; i < n; i++)
    {
        printf("A[%d] = ", i);
        scanf("%f", &A[i]);
        sum += A[i];
    }

    //Aritmetik ortalamayi hesaplayin
    avg = sum / n;

    //Döngü içinde A dizisinin elemanlarini tek tek kontrol edin ve aritmetik ortalamadan küçük olan elemanlari B dizisine, büyük olan elemanlari da C dizisine ekleyin
    int b_index = 0, c_index = 0; //B ve C dizilerinin kaçinci elemana ekleme yapildigini tutan indeksler
    for (i = 0; i < n; i++)
    {
        if (A[i] < avg)
        {
            B[b_index] = A[i];
            b_index++;
        }
        else
        {
            C[c_index] = A[i];
            c_index++;
        }
    }

    //B ve C dizilerini ekrana yazdirin
    printf("\nB dizisi: ");
    for (i = 0; i < b_index; i++)
    {
        printf("%.2f ", B[i]);
        printf("\nC dizisi%f: ",C[i]);
    }

    
}

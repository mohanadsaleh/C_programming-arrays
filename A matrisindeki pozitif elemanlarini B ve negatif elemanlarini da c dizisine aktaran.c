#include <stdio.h>

int main()
{
    int n;
    printf("Matrisin boyutunu girin: ");
    scanf("%d", &n);

    int A[n][n];
    int B[n*n];
    int C[n*n];
    int i,j;

    printf("Matrisin elemanlarýný girin: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    
    int indexB = 0;
    int indexC = 0;

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            
            if (A[i][j] > 0)
            {
                
                B[indexB] = A[i][j];
                indexB++;
            }
            else
            {
                
                C[indexC] = A[i][j];
                indexC++;
            }
        }
    }

    
    printf("B'deki elementler: ");
    for ( i = 0; i < indexB; i++)
    {
        printf("%d ", B[i]);
    }
    printf("\n");

    printf("C'deki elementler: ");
    for (i = 0; i < indexC; i++)
    {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}

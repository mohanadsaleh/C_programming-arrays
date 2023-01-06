#include <stdio.h>

#define N 3

int main() {
  int A[N][N] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
  int B[N][N] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };
  int C[N*N];
  int i,j ;
    

  int sayac = 0;  

  for ( i = 0; i < N; i++) {
    for ( j = 0; j < N; j++) {
      if (A[i][j] == B[i][j]) { 
        C[sayac] = A[i][j];  
        sayac++; 
      }
    }
  }

  
  for (i = 0; i < sayac; i++) {
    printf("%d ", C[i]);
  }

  return 0;
}

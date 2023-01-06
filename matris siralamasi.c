#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100
int i,j,k;
void siralama (int n, int A[][MAX_SIZE]) {
  for (j = 0; j < n; j++) {
    for (i = 0; i < n - 1; i++) {
      for ( k = i + 1; k < n; k++) {
        if (A[k][j] > A[i][j]) {
          int temp = A[i][j];
          A[i][j] = A[k][j];
          A[k][j] = temp;
        }
      }
    }
  }
}

int main() {
  int n;
  int i,j;
  printf("matris boyutu girinz: ");
  scanf("%d", &n);

  int A[MAX_SIZE][MAX_SIZE];
  printf("matris elemanlari girinz: \n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &A[i][j]);
    }
  }

  siralama(n, A);

  printf("siralama halde: \n");
  for (i = 0; i < n; i++) {
    for ( j = 0; j < n; j++) {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }

  return 0;
}

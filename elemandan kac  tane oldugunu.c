#include <stdio.h>

#define N 3

int main() {
  int A[N][N];  
  int elem; 
  int sayac;
  int i,j;  

 
  printf("A matrisini girin: \n");
  for (i = 0; i < N; i++) {
    for ( j = 0; j < N; j++) {
      scanf("%d", &A[i][j]);
    }
  }

  
  printf("Hangi elemandan kaç tane olduðunu bulmak istiyorsunuz: ");
  scanf("%d", &elem);

  sayac= 0; 

  
  for ( i = 0; i < N; i++) {
    for ( j = 0; j < N; j++) {
      if (A[i][j] == elem) {  
        sayac++;  
      }
    }
  }

 
  printf("%d elemani %d tane vardir.\n", elem, sayac);

  return 0;
}

#include <stdio.h>

int main(void) {
  int n;
  float sum, avg, missing;
int i=0;
  // Eleman say�s�n� ve ortalamas�n� kullan�c�dan al�n
  printf("Eleman say�s�n� girin: ");
  scanf("%d", &n);
  printf("Ortalamay� girin: ");
  scanf("%f", &avg);

  // Eleman de�erlerini oku ve toplam�n� hesapla
  sum = 0;
  for ( i = 0; i < n - 1; i++) {
    float x;
    printf("Eleman %d de�erini girin: ", i + 1);
    scanf("%f", &x);
    sum += x;
  }

  // Eksik eleman de�erini hesapla
  missing = (n * avg - sum) / n;
  printf("Eksik eleman de�eri: %.2f\n", missing);

  return 0;
}

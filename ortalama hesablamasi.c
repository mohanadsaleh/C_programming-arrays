#include <stdio.h>

int main(void) {
  int n;
  float sum, avg, missing;
int i=0;
  // Eleman sayýsýný ve ortalamasýný kullanýcýdan alýn
  printf("Eleman sayýsýný girin: ");
  scanf("%d", &n);
  printf("Ortalamayý girin: ");
  scanf("%f", &avg);

  // Eleman deðerlerini oku ve toplamýný hesapla
  sum = 0;
  for ( i = 0; i < n - 1; i++) {
    float x;
    printf("Eleman %d deðerini girin: ", i + 1);
    scanf("%f", &x);
    sum += x;
  }

  // Eksik eleman deðerini hesapla
  missing = (n * avg - sum) / n;
  printf("Eksik eleman deðeri: %.2f\n", missing);

  return 0;
}

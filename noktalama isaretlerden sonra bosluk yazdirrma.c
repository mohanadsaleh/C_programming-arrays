#include <stdio.h>
#include <string.h>

int main() {
  char c[1000];  // c�mleyi saklamak i�in bir dizi
  int uzunluk;  // c�mle uzunlu�u
int i=0;
  printf("Lutfen bir c�mle girin: ");
  gets(c);  // c�mleyi al�n

  uzunluk = strlen(c);  // c�mle uzunlu�unu hesaplay�n

  for ( i = 0; i < uzunluk; i++) {
    // noktalama i�aretlerinden sonra bo�luk ekleyin
    if (c[i] == '.' || c[i] == '?' || c[i] == '!') {
      printf("%c  ", c[i]); // bou�luk yazd�rma
    } else {
      printf("%c", c[i]);
    }
  }

  return 0;
}

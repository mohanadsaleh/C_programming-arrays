#include <stdio.h>
#include <string.h>

int main() {
  char c[1000];  // cümleyi saklamak için bir dizi
  int uzunluk;  // cümle uzunluðu
int i=0;
  printf("Lutfen bir cümle girin: ");
  gets(c);  // cümleyi alýn

  uzunluk = strlen(c);  // cümle uzunluðunu hesaplayýn

  for ( i = 0; i < uzunluk; i++) {
    // noktalama iþaretlerinden sonra boþluk ekleyin
    if (c[i] == '.' || c[i] == '?' || c[i] == '!') {
      printf("%c  ", c[i]); // bouþluk yazdýrma
    } else {
      printf("%c", c[i]);
    }
  }

  return 0;
}

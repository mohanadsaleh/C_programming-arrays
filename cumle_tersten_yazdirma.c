#include <stdio.h>
#include <string.h>

int main(void) {
  char c[100];
int i;
  printf("Bir cumle girin: ");
  fgets(c, 100, stdin);

  int uzunluk = strlen(c);

  printf("\nGirilen cumle tersi: ");
  for (i = uzunluk - 1; i >= 0; i--) {
    printf("%c", c[i]);
  }

  return 0;
}

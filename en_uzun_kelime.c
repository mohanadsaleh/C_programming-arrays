#include <stdio.h>
#include <string.h>

int main(void) {
  char cumle[1000];
  printf("Lutfen bir cumle giriniz: ");
  gets(cumle);

  char *kelime = strtok(cumle, " ");
  char *en_uzun_kelime = kelime;
  int en_uzun_uzunluk = strlen(kelime);

  while (kelime != NULL) {
    kelime = strtok(NULL, " ");
    if (kelime != NULL) {
      int uzunluk = strlen(kelime);
      if (uzunluk > en_uzun_uzunluk) {
        en_uzun_uzunluk = uzunluk;
        en_uzun_kelime = kelime;
      }
    }
  }

  printf("En uzun kelime: %s\n", en_uzun_kelime);
  return 0;
}

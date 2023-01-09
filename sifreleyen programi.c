#include <stdio.h>
#include <string.h>

int main() {
  char cumle [100];
  int i;
  printf("cumle girinz : ");
  scanf("%s",cumle );

  int message_length = strlen(cumle );

  for ( i = 0; i < message_length; i++) {
    int ascii_code = cumle [i];
    printf("%d", ascii_code);
  }

  return 0;
}

#include <stdio.h>
#include <stdbool.h>

// Bir say�n�n palindrom olup olmad���n� kontrol eden fonksiyon
bool isPalindrome(int num) {
  int reverse = 0, n = num;

  while (n > 0) {
    reverse = reverse * 10 + n % 10;
    n /= 10;
  }

  return num == reverse;
}

int main(void) {
  int lower, upper;
  int i=0;

  // Alt ve �st s�n�rlar� kullan�c�dan al�n
  printf("Alt s�n�r� girin: ");
  scanf("%d", &lower);
  printf("�st s�n�r� girin: ");
  scanf("%d", &upper);

  // Alt ve �st s�n�rlar aras�ndaki palindrom tamsay�lar� bulun ve ekrana yazd�r�n
  for ( i = lower; i <= upper; i++) {
    if (isPalindrome(i)) {
      printf("%d ", i);
    }
  }

  return 0;
}

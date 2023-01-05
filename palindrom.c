#include <stdio.h>
#include <stdbool.h>

// Bir sayýnýn palindrom olup olmadýðýný kontrol eden fonksiyon
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

  // Alt ve üst sýnýrlarý kullanýcýdan alýn
  printf("Alt sýnýrý girin: ");
  scanf("%d", &lower);
  printf("Üst sýnýrý girin: ");
  scanf("%d", &upper);

  // Alt ve üst sýnýrlar arasýndaki palindrom tamsayýlarý bulun ve ekrana yazdýrýn
  for ( i = lower; i <= upper; i++) {
    if (isPalindrome(i)) {
      printf("%d ", i);
    }
  }

  return 0;
}

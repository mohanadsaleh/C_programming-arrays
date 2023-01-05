#include <stdio.h>
#include <string.h>

#define MAX_CHARS 256

int main() {
char str[1000];
int sayac[MAX_CHARS];
int i, max;
int ch;

printf("metin girinz: ");
gets(str);

for (i = 0; i < MAX_CHARS; i++)
sayac[i] = 0;

i = 0;
while (str[i]) {
ch = (int) str[i];
sayac[ch]++;
i++;
}

max = 0;
for (i = 0; i < MAX_CHARS; i++) {
if (sayac[i] > sayac[max])
max = i;
}

printf("'%c'en cok kullanilan karakter\n", max);

return 0;
}

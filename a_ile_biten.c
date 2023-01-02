#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, sayac = 0;

    printf("cumle giriniz: ");
    gets(str);

    int uzunluk = strlen(str);

    for (i = 0; i < uzunluk; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            if (str[i - 1] == 'a')
            {
                sayac++;
            }
        }
    }

    if (str[uzunluk - 1] == 'a')
    {
        sayac++;
    }

    printf("'a' ile biten kelimelerin sayisi: %d", sayac);

    return 0;
}

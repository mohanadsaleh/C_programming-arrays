#include <stdio.h>
#include <string.h>

int main()
{
	int i;
    char ondalik_sayi[20];
	 
    printf("Ondalikli sayiyi girin: ");
    scanf("%s", ondalik_sayi); 

    
    for (i = 0; i < strlen(ondalik_sayi); i++)
        if (ondalik_sayi[i] == ',')
            ondalik_sayi[i] = '.';

    // d�zg�n hale getirilen ondal�kl� say� yazd�r�l�yor
    printf("Duzgun hale getirilen ondalikli sayi: %s", ondalik_sayi);

    return 0;
}

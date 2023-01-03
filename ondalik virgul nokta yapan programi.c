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

    // düzgün hale getirilen ondalýklý sayý yazdýrýlýyor
    printf("Duzgun hale getirilen ondalikli sayi: %s", ondalik_sayi);

    return 0;
}

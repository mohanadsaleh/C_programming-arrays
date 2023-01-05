#include <stdio.h>
#include <conio.h>
#include <math.h>



main(void) {
	
	
	int sayi ,sayac=0,top=0,bas;
	printf(" Bir sayi girinz ( ikilik sayiyi)");
	
	scanf("%d",&sayi);
	while ( sayi>9)
	{
		
		bas=sayi%10;
		sayi=sayi/10;
		top+=bas *pow ( 2,sayac);
		sayac++;
		
	}
	top+=sayi*pow( 2,sayac);
	printf(" decimal sayi =%d",top);
	
	
	
	return 0;
}

#include <stdio.h>
#include <conio.h>
#include <math.h>



main(void) {
	
	
	int sayi ,i=0,top=0;
	printf(" decimal sayi girinz");
	
	scanf("%d",&sayi);
	while ( sayi>=2)
	{
		
	top+=(sayi%2)*pow( 10,i);
	sayi/=2;
	i++;
		
	}
	top+=sayi*pow( 10,i);
	printf(" binary sayiyi =%d",top);
	
	
	
	return 0;
}

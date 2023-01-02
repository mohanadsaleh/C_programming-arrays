/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int diz[100];
    int i,n;
    printf("dizinin eleman sayisi girinzi");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
         {
        printf("dizini degeri [%d] giriniz",i+1);
        scanf("%d",&diz[i]);
        
         }
        printf("dizide %d tane eleman vardir",i);            
    
    

    return 0;
}



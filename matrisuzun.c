#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

int main()
{
    int matris_A[3][3];
    int matris_B[3][3];
    
    int matris_Sonuc[3][3];
    
    int i,j,k;
    
    printf("A matris degerlerini giriniz:\n");
    
    for ( i = 0; i < 3; i++) {
    
      for ( j = 0; j < 3; j++) {
    
		printf("i,j (%d,%d):\n",i, j);
    
         scanf("%d", &matris_A[i][j]);
    
      }
   }
   
   int toplam = 0;
   
   
   printf("B matris degerlerini giriniz:\n");
    
    for ( i = 0; i < 3; i++) {
    
      for ( j = 0; j < 3; j++) {
    
		printf("i,j (%d,%d):\n",i, j);
    
         scanf("%d", &matris_B[i][j]);
    
      }
   
   }
    
    for ( i = 0; i <= 2; i++) {
     
      for ( j = 0; j <= 2; j++) {
    
         toplam = 0;
    
         for ( k = 0; k <= 2; k++) {
            toplam = toplam + matris_A[i][k] * matris_B[k][j];
         }
    
         matris_Sonuc[i][j] = toplam;
      }
   }
    
    printf("\niki matrisin carpim sonucu: \n");
  
    for ( i = 0; i < 3; i++) {
  
       for ( j = 0; j < 3; j++) {
     
          printf(" %d ", matris_Sonuc[i][j]);
     
       }
       printf("\n");
    }
   
    return(0);
}

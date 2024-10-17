#include<stdio.h>
int main(){
	
	int dizi1[3][3],dizi2[3][3],toplam[3][3];
	int i,j;
	
	printf("lutfen 1. matrisin  degerlerini giriniz \n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
			printf("%d.satiri ve %d. sutunu giriniz : ",i+1,j+1);
	        scanf("%d",&dizi1[i][j]);		
		}
	}
	
	printf("\nlutfen 2. matrisin  degerlerini giriniz \n");
	
	for(i=0;i<3;i++){	
		for(j=0;j<3;j++){
			
			printf("%d.satiri ve %d. sutunu giriniz : ",i+1,j+1);
	        scanf("%d",&dizi2[i][j]);	
		}
	}
	printf("\n-Ýki Matrisin Toplami -\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			toplam[i][j] = dizi1[i][j] + dizi2[i][j];
			printf("%d \t", toplam[i][j]);   
		}
			printf("\n");
	}
	/*
	printf("\n-Ýki Matrisin Çarpimi -\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			toplam[i][j] = dizi1[i][j] + dizi2[i][j];
			printf("%d \t", toplam[i][j]);   
		}
			printf("\n");
	}
	*/

}

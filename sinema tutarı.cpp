#include<stdio.h>
#include<stdlib.h>
int main()
{
	int misir,kola,su,bilet,toplam;
	
	printf("Bilet adetini giriniz lutfen :");
	scanf("%d",&bilet);
	
	printf("Misir adetini giriniz:");
	scanf("%d",&misir);
	
	printf("Kola adetini giriniz:");
	scanf("%d",&kola);
	
	printf("Su adetini giriniz:");
	scanf("%d",&su);
	
	toplam=bilet*8+misir*2+kola*2+su*1;
	
	printf("odemeniz gereken tutar : %d",toplam);
	printf(" TL...");

}

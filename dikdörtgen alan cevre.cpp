#include<stdio.h>
#include<stdlib.h>
int main()
{
	float ukenar,kkenar,alan,cevre;
	
	printf("Dikdortgenin uzun kenarini giriniz:");
	scanf("%f",&ukenar);
	
	printf("Dikdortgenin kisa kenarini giriniz:");
	scanf("%f",&kkenar);
	
	alan=ukenar*kkenar;
	cevre=2*(ukenar+kkenar);
	
	printf("Alaniniz :%f",alan);
	printf("\nCevreniz :%f",cevre);
	
}


#include<stdio.h>
#include<stdlib.h>
int main()
{
	int dizi[100];
	int sayi,i;
	
	printf("eleman sayisini giriniz :");
	scanf("%d",&sayi);
	
	for(i=0;i<sayi;i++)
	{
		printf("dizinin %d. degerini giriniz:",i+1);
		scanf("%d",&dizi[i]);
	}
	
	for(i=0;i<sayi;i++)
	{
		printf("%d ",dizi[i]);
	}
}

	
	


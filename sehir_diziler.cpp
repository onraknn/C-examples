#include<stdio.h>
int main()
{
	int i,sayi,toplam=0,ortalama;
	char dizi[200];
	
	printf("sayi gir: ");
	scanf("%d",&sayi);
	
	for(i=0;i<sayi;i++)
	{	
		printf("%d. deger: ",i+1);
     	scanf("%d",&dizi[i]);	
	}
	
	printf("\n\n");
	
	for(i=0;i<sayi;i++)
	{
		printf("%d " ,dizi[i]);
	    toplam =toplam+dizi[i];
		ortalama=toplam/sayi;
	}
	  
	printf("\ntoplam : %d " ,toplam);
	printf("\nortalama : %d " ,ortalama);
	
	return 0;
}

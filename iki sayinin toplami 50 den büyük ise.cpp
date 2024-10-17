#include<stdio.h>
#include<stdlib.h>
int main()
{
	int s1,s2,toplam;
	
	printf("bir tane sayi giriniz :");
	scanf("%d",&s1);
	
	printf("bir tane sayi giriniz :");
	scanf("%d",&s2);
	
	toplam=s1+s2;
	
	if(toplam>50)
	{
		printf("iki sayinin toplami:%d - 50 den buyuk.");
	}
	else
	{
		printf("iki sayinin toplami:%d - 50 den kucuk. ");
	}
	
}


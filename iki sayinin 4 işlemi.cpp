#include<stdio.h>
#include<stdlib.h>
int main()
{
	int s1,s2,toplam,cikarma,carpim,bolme;
	
	printf("bir sayi giriniz :");
	scanf("%d",&s1);
	
	printf("bir sayi giriniz :");
	scanf("%d",&s2);
	
	toplam=s1+s2;
	cikarma=s1-s2;
	carpim=s1*s2;
	bolme=s1/s2;
	
	printf("iki sayinin toplami :%d",toplam);
	printf("\niki sayinin cikarimi :%d",cikarma);
	printf("\niki sayinin carpimi :%d",carpim);
	printf("\niki sayinin bolumu :%d",bolme);
	
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int s1,yuzler,onlar,birler,toplam;
	
	printf("3 bassamkli sayi giriniz :");
	scanf("%d",&s1);
	
	yuzler=s1/100;
	
	onlar=s1/10;
	onlar=onlar%10;
	
	birler=s1%10;
	
	toplam=yuzler+onlar+birler;
	
	
	printf("%d\n",yuzler);
	printf("%d\n",onlar);
	printf("%d\n",birler);
	
	printf("rakamlarin toplami %d",toplam);
	
	
}

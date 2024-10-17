#include<stdio.h>
#include<stdlib.h>
int main()
{
	int s1,birler,onlar,yuzler;
	
	printf("3 basamakli sayi giriniz:");
	scanf("%d",&s1);
	
yuzler = s1/100;
		birler = s1%10;
		onlar = (s1%100)/10;
	
	printf("%d\n",yuzler);
	printf("%d\n",onlar);
	printf("%d",birler);
}

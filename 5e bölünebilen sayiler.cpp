#include<stdio.h>
#include<stdlib.h>
int main()
{
	int s1;
	
	printf("Bir tane sayi giriniz :");
	scanf("%d",&s1);
	
	if(s1%5==0)
	{
		printf("Girdiginiz deger 5 e tam bolunur");
	}
	else
	{
		printf("Girdiginiz deger 5e tam bolunmez ");
	}	
}

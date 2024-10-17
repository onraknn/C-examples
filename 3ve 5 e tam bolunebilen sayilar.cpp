#include<stdio.h>
#include<stdlib.h>
int main()
{
	int s1;
	
	printf("Bir tane sayi giriniz :");
	scanf("%d",&s1);
	
	if(s1%3==0 && s1%5==0)
	{
		printf("girdiginiz deger 3 ve 5 e tam bolunur.");
	}
	else
	{
		printf("girdiginiz deger 3 ve 5 e tam bolunmez");
	}
	
}

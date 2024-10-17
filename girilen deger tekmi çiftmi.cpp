#include<stdio.h>
#include<stdlib.h>
int main()
{
	int s1;
	
	printf("Bir tane sayi giriniz :");
	scanf("%d",&s1);
	
	if(s1%2==0)
	{
		printf("Girdiginiz deger --CÝFTTÝR--");
	}
	else
	{
		printf("Girdiginiz deger --TEKTÝR-- ");
	}	
}

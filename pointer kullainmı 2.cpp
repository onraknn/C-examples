#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

int main()
{
	int sayi =10;
	int *s = &sayi;
	
	char harf='a';
	char *h = &harf;
	
	printf("%d\n",sayi);
	printf("%x",s);
	printf("\n\n");
	
	
	printf("%c \n",harf);
	printf("%x",h);
}

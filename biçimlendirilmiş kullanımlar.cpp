#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<Math.h>

int main()
{
	char kitap[40];
	
	printf("AD : ");
	scanf("%s",kitap);
	
	printf("%s",kitap);
	printf("\n");
	printf("%10s",kitap); // burada alana 10 karakter - girilen karakter kadar boþluk býrakýyor.
	printf("\n"); 
	printf("%.2s",kitap); // burada girilen ilk 2 karakteri al diyor.
	
}

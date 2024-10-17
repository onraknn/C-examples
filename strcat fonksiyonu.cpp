#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<Math.h>

int main()
{
	char kitapad[30],yazarad[30],kitapyazar[60];
	
	printf("kitap ad ve yazar ad giriniz : ");
	scanf("%s%s",kitapad,yazarad);
	
	strcat(kitapyazar,kitapad);
	strcat(kitapyazar," ");
	strcat(kitapyazar,"<--->");
	strcat(kitapyazar,yazarad);
	
	printf("\n\n");
	printf("%s",kitapyazar);
}

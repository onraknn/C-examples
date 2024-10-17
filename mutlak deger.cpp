#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<Math.h>

int main()
{
	int sayi,sonuc;
	
	printf("sayi gir : ");
	scanf("%d",&sayi);
	
	sonuc=fabs(sayi);
	printf("sayinin mutlak degeri : %d",sonuc);
}

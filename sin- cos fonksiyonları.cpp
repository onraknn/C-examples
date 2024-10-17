#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<Math.h>

int main()
{
	double sayi,sonuc;
	
	printf("derece gir : ");
	scanf("%lf",&sayi);
	
	sonuc=sin(sayi);
	printf("sayinin mutlak degeri : %d",sonuc);
}

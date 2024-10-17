#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<Math.h>


int main()
{
	float sayi,sonuc1,sonuc2;
	
	printf("sayi gir : ");
	scanf("%f",&sayi);
	
	sonuc1=floor(sayi);
	sonuc2=ceil(sayi);
	
	printf("%f\n",sonuc1);
	printf("%f\n",sonuc2);


}

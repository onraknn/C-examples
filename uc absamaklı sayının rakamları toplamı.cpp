#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

int main()
{
	int sayi,ob,yb,bb;
	
	printf("sayi gir : ");
	scanf("%d",&sayi);
	
	yb=sayi/100;
	bb=sayi%10;
	ob=(sayi/10)%10;
	
	printf("%d\n%d\n%d\n",yb,ob,bb);
	printf("toplam : %d",yb+ob+bb);

}

#include<stdio.h>

int main(){
	
	int sayi1,sayi2,gecici;
	
	printf("1. sayiyi gir : ");
	scanf("%d",&sayi1);
	
	printf("2. sayiyi gir : ");
	scanf("%d",&sayi2);
	
	printf("\n1. sayi : %d\n2. sayi : %d\n",sayi1,sayi2);
	
	gecici = sayi1;
	sayi1 = sayi2;
	sayi2 = gecici;
	
	printf("---------------\nDegistirildikten sonra \n----------------\n");
	printf("1. sayi : %d\n2. sayi : %d",sayi1,sayi2);
	
	
	return 0;
}

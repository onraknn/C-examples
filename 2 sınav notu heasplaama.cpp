#include<stdio.h>
#include<stdlib.h>
int main()
{
	int s1,s2,s3,proje,ort;
	
	printf("birinci sinav notunuzu giriniz :");
	scanf("%d",&s1);
	
	printf("ikinci sinav notunuzu giriniz :");
	scanf("%d",&s2);
	
	printf("ucuncu sinav notunuzu giriniz :");
	scanf("%d",&s3);
	
	printf("proje notunuzu giriniz :");
	scanf("%d",&proje);
	
	ort=(s1+s2+s3+proje)/4;
	
	if(ort<50)
	{
		printf("FF");
	}
	
	else if(ort>=50 && ort<60)
	{
		printf("DD");
	}
	
	else if(ort>=60 && ort<70)
	{
		printf("CC");
	}
	
	else if(ort>=70 && ort<85)
	{
		printf("BB");
	}
	
	else if(ort>=85)
	{
		printf("AA");
	}
	
}

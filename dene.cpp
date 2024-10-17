#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

struct kayit{
	char ad[20];
	int no;
	int sinif;
	float ortalama;
};
struct kayit ogr;

int main()
{
	printf("adiniz :");
	scanf("%s",&ogr.ad);
	
	printf("numaraniz :");
	scanf("%d",&ogr.no);
	
	printf("sinifiniz :");
	scanf("%d",&ogr.sinif);
	
	printf("ortalamaniz :");
	scanf("%f",&ogr.ortalama);
	
	printf("%s \n",ogr.ad);
	printf("%d \n",ogr.no);
	printf("%d \n",ogr.sinif);
	printf("%.2f",ogr.ortalama);
	
}

#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

enum sehirler{
	sifir,adana,adiyaman,afyon,agri,amasya,ankara,antalya,aydin,artvin,balikesir
};

int main()
{
	enum sehirler il;
	il=ankara;
	printf("%d",il);
}

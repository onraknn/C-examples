#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	int sayilar[5]={16,18,19,23,36};
	int toplam=0;
	int i;
	
	for(i=0;i<6;i++)
	{
		toplam=toplam+sayilar[i];
	}	
	printf("%d",toplam);
}
	
	
	

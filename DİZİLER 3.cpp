#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	int sayilar[8]={8,7,6,5,4,3,2,1};
	int toplam=0;
	int i;
	
	for(i=0;i<8;i++)
	{
		toplam=toplam+sayilar[i];
	}	
	printf("%d",toplam);
}
	
	


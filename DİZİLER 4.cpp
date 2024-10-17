#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sayilar[]={7,6,5,4,3,2,1};
	int i;
	int toplam=1;

	for(i=0;i<7;i++)
	{
		toplam=toplam*sayilar[i];
	}
	printf("toplam faktoriyel: ( %d )",toplam);
	
}
	
	


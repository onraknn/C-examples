#include<stdio.h>
int main()
{
	
	/*
	
	int i,toplam=0;
	int sayilar[]={15,20,25,30};
	
	for(i=0;i<4;i++)
	{
		printf("%d ",sayilar[i]);
		toplam=toplam+sayilar[i];
		
	}
	printf("\ntoplam : %d",toplam);

		return 0;
		
		*/
		
		int i,fak=1;
		int sayilar[]={1,2,3,4,5,6};
		
		for(i=0;i<6;i++){
			
			fak=fak*sayilar[i];
		}
		printf("%d",fak);
		
		return 0;
}


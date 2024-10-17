#include<stdio.h>

int main(){
	
	/*
	int cik=3;
	int su=1;
	int kola=10;
	int cips=6;
	int fiyat=0;
	
	printf("------------MARKETE HOSGELDINIZ-----------\n\n");
	
	printf("MARKETTE BULUNAN URULER;\n\n");
	printf("1.Cikolata\n2.Su\n3.Cips\n4.Kola\n\n");
	
	printf("Cikolatadan kac tane almak istersiniz :");
	scanf("%d",&cik);
	printf("Sudan kac tane almak istersiniz :");
	scanf("%d",&su);
	printf("Koladan kac tane almak istersiniz :");
	scanf("%d",&kola);
	printf("Cipsten kac tane almak istersiniz :");
	scanf("%d",&cips);
	
	fiyat=((cik*3)+(su*1)+(kola*10)+(cips*6));
	
	printf("\ntoplam fiyat : %d",fiyat);
	
	*/
	
	int cik=3;
	int su=1;
	int kola=10;
	int cips=6;
	int fiyat=0;
	int islem;
	int adet;
	char a,cevap;
	
	printf("------------MARKETE HOSGELDINIZ-----------\n\n");
	
	printf("MARKETTE BULUNAN URULER;\n\n");
	printf("1.Cikolata\n2.Su\n3.Cips\n4.Kola\n\n");
	printf("Hangisini almak istersiniz (1,2,3,4) : ");
	scanf("%d",&islem);
	
	
				printf("baska bir sey almak istermisiniz :('Y'),('N')");
			scanf("%c",&cevap);
	switch(islem){
		
			
			

		case 1:
			printf("Cikolatadan kac tane almak istesiniz : ");
			scanf("%d",&adet);
			fiyat=adet*cik;
			printf("Toplam fiyat : %d\n",fiyat);
			printf("baska bir sey almak istermisiniz :('Y'),('N')");
			scanf("%c",&cevap);
		
			break;
			
				
			
		case 2:
			printf("Sudan kac tane almak istesiniz : ");
			scanf("%d",&adet);
			fiyat=adet*su;
			printf("Toplam fiyat : %d",fiyat);
			break;
			
		case 3:
			printf("Cipsten kac tane almak istesiniz : ");
			scanf("%d",&adet);
			fiyat=adet*cips;
			printf("Toplam fiyat : %d",fiyat);
			break;
			
		case 4:
			printf("Koladan kac tane almak istesiniz : ");
			scanf("%d",&adet);
			fiyat=adet*kola;
			printf("Toplam fiyat : %d",fiyat);
			break;
				
		default:
			printf("Hatali giris yaptiniz !!");
		}	
	}
	
	
	
	
	
	
	
	
	


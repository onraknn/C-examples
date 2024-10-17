#include<stdio.h>

int main(){
	
	/*
	int el,bagaj,toplam,para;
	
	printf("el kilonuzu giriniz :");
	scanf("%d",&el);
	
	printf("bagaj kilonuzu giriniz :");
	scanf("%d",&bagaj);
	
	toplam =el+bagaj;
	
	if(toplam >23)
	{
		para = (toplam -23)*5;
		printf("%d",para);
	}
	else{
		printf("borcunuz yoktur.");
	}
	
	*/
	
	float el,bagaj,el_toplam,bagaj_toplam,toplam;
	
	printf("el kilonuzu giriniz :");
	scanf("%f",&el);
	
	printf("bagaj kilonuzu giriniz :");
	scanf("%f",&bagaj);
	
	el_toplam=(el-8)*4;
	bagaj_toplam=(bagaj-15)*5;
	toplam=el_toplam+bagaj_toplam;
	
	if(el>8 && bagaj<=15){
		printf("el kilonuz %f kg kadar asmistir\n",el-8);
		printf("ekstradan odemeniz gereken ucret : %f",el_toplam);
	}
	
	else if(bagaj>15 && el<=8){
		printf("bagaj kilonuz %f kg kadar asmistir\n",bagaj-15);
		printf("ekstradan odemeniz gereken ucret : %f",bagaj_toplam);
	}
	else if(el>8 && bagaj>15){
     	printf("el kilonuz %f kg kadar asmistir\n",el-8);
     	printf("bagaj kilonuz %f kg kadar asmistir\n",bagaj-15);
		printf("ekstradan odemeniz gereken ucret : %f",toplam);
	}
	else{
		printf("borcunuz yoktur.");
	}
	return 0;
}

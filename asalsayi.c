#include<stdio.h>
int main()
{   
	int sayi;	
	printf("bir sayi giriniz : ");	
	scanf("%d",&sayi);
		
	if(sayi ==2){
		printf("bir asal sayidir ");
	}
	
	else{
	if(sayi %2==0 || sayi %3==0  || sayi %5==0 || sayi %7==0 || sayi ==1 ){
		printf("bir asal sayi degildir ");
	}
	
	else {		
		printf("bir asal sayidir ");
    	}
	}
	return 0;
}

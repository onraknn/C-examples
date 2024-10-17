#include<stdio.h>

float hesap_makinesi(){
	
	float sayi1,sayi2;
	char islem;
	
	printf("sayi (islem) sayi giriniz : ");
	scanf("%f",&sayi1);
	scanf(" %s ",&islem);	
	scanf("%f",&sayi2);
	
		if(islem=='+')
			printf ("%.2f",sayi1+sayi2); 
			
		else if(islem=='-')
			printf ("%.2f",sayi1-sayi2); 
			
		else if(islem=='*')
			printf ("%.2f",sayi1*sayi2);
			
		else if(islem=='/')
			printf ("%.2f",sayi1/sayi2);	
}

int main(){	
	hesap_makinesi();	
}

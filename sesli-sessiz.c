#include<stdio.h>


int main()
{   
	char harf;
		
	printf("lutfen bir harf giriniz = ");
	scanf("%c",&harf);
	
	if(harf=='a' || harf=='e' || harf=='u' || harf=='o' ||  harf=='i' ||	harf=='A' || harf=='E' ||  harf=='U' || harf=='O' || harf=='Ý' ){
		
		printf("sesli harf girdiniz");
		
	}
	
	else{
		printf("sessiz harf girdiniz");

	}
	
	return 0;
}

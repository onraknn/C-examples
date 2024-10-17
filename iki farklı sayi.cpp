#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

int main(){
	
	int s1,s2;
	int i,toplam=0,toplam1=0;
	
	printf("birinci sayiyi giriniz : ");
	scanf("%d",&s1);
	printf("ikinci sayiyi giriniz : ");
	scanf("%d",&s2);
	
	if(s1!=s2){
		
		if(s1<s2){
			for(i=s1;i<=s2;i++){
			toplam=toplam+i;
		}
		printf("girilen iki deger arasindaki toplam: %d",toplam);
		}
	
		else if(s2<s1){
			for(i=s2;i<=s1;i++){
			toplam1=toplam1+i;
		}
		printf("girilen iki deger arasindaki toplam: %d",toplam1);
		}				
	}
	else{		
		printf("iki deger ayni baska deger giriniz!!!");			
	}
	return 0;
}

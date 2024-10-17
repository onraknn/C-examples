/*

#include<stdio.h>
int main(){

	int i,sayac=0;
	
	for(i=1;i<=10;i++){
		
		printf("%d \n",i);
		sayac=sayac+i;
	}
	printf("sayac : %d",sayac);	
}

*/




#include<stdio.h>
int main(){
	
	int i,sayac=1,sayi;
	
	printf("sayi gir : ");
	scanf("%d",&sayi);
	
	for(i=sayi;i>=1;i--)
	{
		sayac =sayac*i;
	}
	printf("%d",sayac);
	
}	


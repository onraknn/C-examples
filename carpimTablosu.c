#include<stdio.h>

int main()
{   
	int sayi,i,deger;
	
	printf("sayi gir : ");
	scanf("%d",&sayi);
	
	for(i=1;i<11;i++){
		
		deger = sayi *i;
		
		printf("%d x %d = %d \n",sayi,i,deger);
		
	}
	
	return 0;
}

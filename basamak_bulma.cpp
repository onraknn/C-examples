#include<stdio.h>

int main(){
	
	int sayi=472,bb,ob,yb,a;
	
	/*
	
	printf("3 basamakli bir sayi giriniz : ");
	scanf("%d",&sayi);
	
	*/
	
	yb = sayi/100;
	a = (sayi/10);
	ob = a%=10;
	bb = sayi%=10;
	
	printf("sayi = 472\n");
	printf("birler basamagi = %d\n",bb);
	printf("onlar basamagi = %d\n",ob);
	printf("yuzler basamagi = %d",yb);

	return 0;
	
}

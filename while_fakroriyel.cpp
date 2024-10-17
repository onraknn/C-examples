#include<stdio.h>
int main(){
	
	int i=1,fak,sayi;
	
	printf("faktoriyeli alinacak sayiyi giriniz : ");
	scanf("%d",&sayi);
	
	while(i<=sayi){
		
		fak=fak*i;
		i++;
	}
	printf("fak : %d",fak);
}

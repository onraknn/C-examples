#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

int main()
{
	int i,toplam=0;
	int sayi[4];
	
	printf("4 adet tam sayi giriniz \n");
	Sleep(1000);
	
	for(i=1;i<=4;i++)
	{
		printf("bir sayi giriniz :");
		scanf("%d",&sayi[i]);
		toplam=toplam+sayi[i];
	}	
    printf("%d",toplam);
}

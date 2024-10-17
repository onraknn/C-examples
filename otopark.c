#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

int main()
{
	int saat;
	
	printf("----- OTOPARKA HOSGELDINIZ -----\n");
	Sleep(700);
	
	printf("Otoparkta kac saat kaldiniz : ");
	scanf("%d",&saat);
    
    if(saat>=0 && saat<=4)
    {
    	printf("Odemeniz gereken ucret = 10TL");
	}
	
	else if(saat>=5 && saat<=8)
    {
    	printf("Odemeniz gereken ucret = 12TL");
	}
	
	else if(saat>=9 && saat<=12)
    {
    	printf("Odemeniz gereken ucret = 15TL");
	}
	
	else if(saat>=13)
    {
    	printf("Odemeniz gereken ucret = 20TL");
	}
	else{
		printf("Hatali Giris yaptiniz !!!\n");
	}
	printf("\n----- IYI GUNLER DILERIZ -----\n");
	Sleep(700);
}

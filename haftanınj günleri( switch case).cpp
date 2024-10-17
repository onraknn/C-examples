#include<stdio.h>
#include<stdlib.h>
int main()
{
	int gun;
	
	printf("1 ila 7 arasinda sayi giriniz :");
	scanf("%d",&gun);
	
	switch(gun)
	{
		case 1:
			printf("          PAZARTESÝ");
			break;
		case 2:
			printf("          SALÝ");
			break;	
		case 3:
			printf("         CARSAMBA");
			break;
		case 4:
			printf("             PERSEMBE");
			break;
		case 5:
			printf("          CUMA");
			break;	
		case 6:
			printf("           CUMARTESÝ");
			break;
		case 7:
			printf("               PAZAR");
			break;
		default:
			printf(" yanlis sayi girdiniz tekrar deneyiniz.");
			break;
	}
}


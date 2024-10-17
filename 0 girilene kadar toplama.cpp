
/*
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

int main()
{

    int sayi,toplam;
    
    while(sayi!=0){
    	
    	printf("bir adet sayi giriniz : ");
    	scanf("%d",&sayi);
    	toplam=toplam+sayi;
	}
	printf("Girilen degerlerin toplami : %d",toplam);
}

*/



#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

int main()
{
    int sayi,ptoplam=0,ntoplam=0,nsayac=0,psayac=0;
    
    while(sayi>0){
    		ptoplam=ptoplam+sayi;
    		psayac++;
    		
    
    	
    	while(sayi=0)
    	{
    		printf("bir adet sayi giriniz : ");
    	scanf("%d",&sayi);
		}
		while(sayi<0)
		{
			ntoplam=ntoplam+sayi;
			nsayac++;
		}
	}
	printf("Girilen pozitif degerlerin toplami : %d",ptoplam);
	printf("\nGirilen pozitif sayi adeti : %d",psayac);
	printf("\n\nGirilen negatif degerlerin toplami : %d",ntoplam);
	printf("\nGirilen pozitif sayi adeti : %d",nsayac);
}




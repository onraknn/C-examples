#include<stdio.h>
#include<conio.h> 
#include<Windows.h>
int main()
 
{ 
   int bakiyebilgileri;
   int paracekme,parayatirma;
   int bakiye=2000;
   int secim;
   
   
   printf("\nX BANKASINA HOSGELDINIZ\n\n");
   Menu:
   printf(" 1-Bakiye Bilgileri\n 2-Para Cekme\n 3-Para Yatirma  \n\nLuften Rakam Girerek Yapacaginiz Islemi Seciniz (1/2/3):\n\nSecimiz: ");
   scanf("%d",&secim);
   
   switch(secim)
   {
   	
   	
   case 1:
   	system("CLS");
   	printf("\n Lutfen Bekleyiniz...\n");
	Sleep(1000);
			
    printf("Bakiye Bilgileri: %d TL",bakiye);
    break;
    
    
    case 2:
    	
    	system("CLS");
    	printf("\n Lutfen Bekleyiniz...\n\n");
    	Sleep(1000);
    		
    	printf("Para Cekilecek Tutari Giriniz:");
        scanf("%d",&paracekme);
        
        if(bakiye>=paracekme){
        	bakiye=bakiye-paracekme;
        	
        	printf("Kalan Tutariniz :%d",bakiye);
        }
        	else 
        	{
			
        		printf("Bakiye Yetersiz:");
		}
		
	
		
		break;
		
		
		case 3:
		
		system("CLS");	
		printf("\n Lutfen Bekleyiniz...\n\n");
			Sleep(1000);
			
		printf("\nPara Yatirilacak Tutari Giriniz:");
        scanf("%d",&parayatirma);
        
        if (parayatirma%5==0 || parayatirma%10==0){
        
        bakiye=bakiye+parayatirma;
        
        printf("Yeni Bakiyeniz :%d",bakiye);
        
   }
       else 
    {
    	printf("Kagit Para Atiniz!!!");
    }
 
       
       	} 
			

			
		}
	
 
		
   



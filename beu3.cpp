 #include<stdio.h>



 int main()
 {
 	int islem,s1,s2,sonuc;	
 	printf("HESAP MAKINESINE HOSGELDINIZ\n\n");	
 	printf("1.Toplama\n2.Cikarma\n3.Carpma\n4.Bolme"); 	
 	printf("\n\nisleminizi seciniz (1,2,3,4) : ");
 	scanf("%d",&islem);

 	switch(islem)
 	{
 		case 1:
 			{			 
 			printf("1. sayiyi giriniz :");
 			scanf("%d",&s1);
 			printf("2. sayiyi giriniz :");
 			scanf("%d",&s2);
 			sonuc=s1+s2;
 			printf("Sonuc : %d",sonuc);
 		}break;
 		
 	    case 2:
 	    {			 
 			printf("1. sayiyi giriniz :");
 			scanf("%d",&s1);
 			printf("2. sayiyi giriniz :");
 			scanf("%d",&s2);
 			sonuc=s1-s2;
 			printf("Sonuc : %d",sonuc);
 		}break;
 				
 		case 3:
 	    {			 
 			printf("1. sayiyi giriniz :");
 			scanf("%d",&s1);
 			printf("2. sayiyi giriniz :");
 			scanf("%d",&s2);
 			sonuc=s1*s2;
 			printf("Sonuc : %d",sonuc);
 		}break;
 		
 		case 4:
 	    {		 
 			printf("1. sayiyi giriniz :");
 			scanf("%d",&s1);
 			printf("2. sayiyi giriniz :");
 			scanf("%d",&s2);
 			sonuc=s1/s2;
 			printf("Sonuc : %d",sonuc);
		}break;
 		
 		default:
 			printf("hatali giris yaptiniz !!!");
 			}}

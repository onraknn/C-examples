
#include<stdio.h>
#include<conio.h> //getch() fonksiyonu için kullanýlmýþtýr.
#include<Windows.h> //Sleep() ve system("CLS") fonksiyonlarý için kullanýlmýþtýr.

main()
{ 
	int bakiye=1000,yatanpara,cekilenpara,gonderilenpara; //Baþlangýç parasý 1000 olarak tanýmlanmýþtýr. Ýsteðe baðlý olarak deðiþtirilebilir.
	int k; //switch-case yapýsý için tanýmlanmýþtýr.
	char kullaniciadi[6]="bulut"; //Kullanýcý adý "bulut" olarak tanýmlanmýþtýr.
	char kullanici[30]="0";
	int adkontrol=0;
	int kullanicisifresi=2013; //Kullanýcý þifresi 2013 olarak tanýmlanmýþtýr.
	int sifre;
	char cevap; //do-while yapýsý için tanýmlanmýþtýr.
	printf("\n\t\t\t =Banka Hesap Sistemi Programi=\n");
	for(;;) //Kullanýcý adý giriþi için sonsuz döngü oluþturulmuþtur. Ýsteðe baðlý olarak while(1) sonsuz döngüsü de kullanýlabilir.
	{ 
		printf("\n Kullanici Adinizi Giriniz:");
		scanf("%s",kullanici);
		fflush(stdin); //Girilen veri deðiþkene aktarýldýktan sonra gerekli alan boþaltýlmaktadýr.
		adkontrol=strcmp(kullanici,kullaniciadi); //kullanici ile kullaniciadi dizileri karþýlaþtýrýlmaktadýr.
		if(adkontrol!=0) //Kullanýcýnýn girmiþ olduðu kullanýcý adýyla, sistemde kayitli kullanýcý adýnýn uyuþmamasý halinde if komutu çalýþýr. 
		{ 	 
			printf("\n Yanlis Kullanici Adi Girdiniz.\n");
			printf(" Lutfen Tekrar Deneyiniz.\n");
			printf("\n Lutfen Bekleyiniz...");
			Sleep(2000); //Programa gerçeklik katmasý amacýyla kullanýlmýþtýr.
			system("CLS"); //Ekrandaki her þeyin silinmesi saðlanmaktadýr.
			printf("\n\n");
			continue; //Tekrar for döngüsüne dönülmesi saðlanmaktadýr.
		}
         
		else //Kullanýcýnýn girmiþ olduðu kullanýcý adýyla, sistemde kayitli kullanýcý adýnýn uyuþmasý halinde else komutu çalýþýr.
		{   
			printf("\n Kullanici Adiniz Dogrulanmaktadir...");
			Sleep(2000);
			system("CLS");
			printf("\n Kullanici Adiniz Dogrudur.\n");
			break; //for döngüsünden çýkýþ saðlanmaktadýr.
		}
  	
	}
   	for(;;) //Kullanýcý þifresi giriþi için sonsuz döngü oluþturulmuþtur. Ýsteðe baðlý olarak while(1) sonsuz döngüsü de kullanýlabilir.
	{ 
	    printf("\n Lutfen Kullanici Sifrenizi Giriniz:");
	    scanf("%d",&sifre);
	    fflush(stdin); //Girilen veri deðiþkene aktarýldýktan sonra gerekli alan boþaltýlmaktadýr.
	    if(kullanicisifresi!=sifre) //Kullanýcý tarafýndan girilen þifre, sistemde kayýtlý olan kullanýcý þifresine eþit deðilse if komutu çalýþýr. 
	    {	 
		    printf("\n Yanlis Sifre Girdiniz.\n");
	            printf(" Lutfen Tekrar Deneyiniz.\n");
		    printf("\n Lutfen Bekleyiniz...");
		    printf("\n\n");
		    Sleep(2000);
		    system("CLS");
		    continue; //Tekrar for döngüsüne dönülmesi saðlanmaktadýr.
            }

	    else //Kullanýcý tarafýndan girilen þifre, sistemde kayýtlý olan kullanýcý þifresine eþit ise else komutu çalýþýr.
	    {   
		    printf("\n Kullanici Sifreniz Dogrulanmaktadir...");
		    Sleep(2000);
		    system("CLS");
		    printf("\n Kullanici Sifreniz Dogrudur.\n\n");
		    Sleep(1000);
		    system("CLS");
		    printf("\n Hosgeldiniz, ");
		    printf("%c\n",puts(kullanici)); //Kullanýcýnýn, kullanýcý adý ekrana yazýlmaktadýr.
		    do
		    { 
			Menu: //goto fonksiyonu için kullanýlmýþtýr.
			printf(" ISLEM MENUSU\n");
			printf(" ============\n\n");
			printf(" 1-Hesap Bakiyesi Goruntuleme\n");
			printf(" 2-Hesaba Para Yatirma\n");
			printf(" 3-Hesaptan Para Cekme\n");
			printf(" 4-Para Gonderme\n");
			printf(" 5-Cikis\n");
			printf("\n Luften Rakam Girerek Yapacaginiz Islemi Seciniz (1/2/3/4/5): ");
			scanf("%d",&k);
			fflush(stdin);
			printf("\n");
			switch(k)
			{  					
				case 1: //Hesap bakiyesi görüntüleme.
					system("CLS");
					printf("\n Hesap Bakiyesi Goruntuleme");
					printf("\n --------------------------");
					printf("\n\n Hesabinizda Bulunan Para: %d TL \n",bakiye);
					printf("\n\n");
					break;

				case 2: //Hesaba para yatýrma.
					system("CLS");
					printf("\n Hesaba Para Yatirma");
					printf("\n -------------------");
					printf("\n\n Hesabiniza Yatacak Para Tutarini Giriniz:");
					scanf("%d",&yatanpara);
					bakiye=bakiye+yatanpara;
					printf(" Hesabiniza Yatan Para: %d TL \n",yatanpara);
					printf(" Hesabinizda Bulunan Para: %d TL \n",bakiye);
					printf("\n\n");
					break;

				case 3: //Hesaptan para çekme.
					while(1)
					{	
						system("CLS");
						printf("\n Hesaptan Para Cekme");
						printf("\n -------------------");
						printf("\n\n Hesabinizdan Cekilecek Para Tutarini Giriniz:");
						scanf("%d",&cekilenpara);
						if(cekilenpara<=bakiye)
						{ 
							bakiye=bakiye-cekilenpara;
							printf(" Hesabinizdan Cekilen Para: %d TL \n",cekilenpara);
							printf(" Hesabinizda Kalan Para: %d TL \n",bakiye);
							break;
						}

						else
						{ 
							printf("\n Bakiyeniz Yetersiz.\n");
							printf(" Hesabinizdan Cekilecek Para Tutarini Tekrar Giriniz.\n\n");
							Sleep(2000);
							continue;
						}
					}
					printf("\n\n");
					break;

				case 4: //Para gönderme.
					while(1)
					{	
						system("CLS");
						printf("\n Para Gönderme");
						printf("\n -------------");
						printf("\n\n Hesabinizdan Gonderilecek Para Tutarini Giriniz:");
						scanf("%d",&gonderilenpara);
						if(bakiye>=gonderilenpara)
						{ 
							bakiye=bakiye-gonderilenpara;
							printf(" Hesabinizdan Gonderilen Para Tutari: %d TL \n",gonderilenpara);
							printf(" Hesabinizda Kalan Para: %d TL \n",bakiye);
							break;
						}
						else 
						{   
							printf("\n");
							printf(" Bakiyeniz Yetersiz.\n");
							printf(" Hesabinizdan Gonderilecek Para Tutarini Tekrar Giriniz.\n");
							Sleep(2000);
							continue;
						}

					}
					printf("\n\n");
					break;

				case 5: //Banka sisteminden çýkýþ yapma.
					system("CLS");
					printf("\n");
					goto cikis; //Kullanýcý direkt olarak çýkýþa yönlendirilir. (NOT: goto kullanýmý tavsiye edilmez. Bunun yerine döngüler kullanýlabilir.)
       
					default: //Kullanýcýnýn 1-2-3-4-5 dýþýnda bir seçenek girmesi halide default yapýsý çalýþýr.
					system("CLS");
					printf("\n Boyle Bir Islem Secenegi Yoktur. Lutfen Tekrar Deneyiniz.\n");
					printf("\n");
					goto Menu; //Kullanýcý direkt olarak menüye yönlendirilir.
					break;
			} 
			printf(" Baska Islem Yapmak Istiyor Musunuz? ( (E)vet - (H)ayir )");
			cevap=getch(); //Kullanýcýnýn cevabý cevap deðiþkenine aktarýlmaktadýr.
			system("CLS");
			printf("\n");
		}
		while(cevap=='E' || cevap=='e'); //cevap deðiþkeninin 'E' veya 'e' olmasý halinde menü ekrana gelecektir.
		if(cevap=='H' || cevap=='h') //cevap deðiþkeninin 'H' veya 'h' olmasý halinde döngüden çýkýlacak ve çýkýþ iþlemi gerçekleþecektir.
		break;
	      }
        }
	cikis:
        printf(" Cikis");
	printf("\n -----");
	printf("\n\n Banka Sistemi Programindan Cikis Yaptiniz.");
	printf("\n Banka Sistemi Programini Kullandiginiz Icin Tesekkur Ederiz.");
	Sleep(2000);
	system("CLS");
	printf("\n Programi Kapatmak Icin Bir Tusa Basiniz.");
	getch(); //Herhangi bir tuþa basýldýðýnda program kapanacaktýr.
}

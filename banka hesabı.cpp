
#include<stdio.h>
#include<conio.h> //getch() fonksiyonu i�in kullan�lm��t�r.
#include<Windows.h> //Sleep() ve system("CLS") fonksiyonlar� i�in kullan�lm��t�r.

main()
{ 
	int bakiye=1000,yatanpara,cekilenpara,gonderilenpara; //Ba�lang�� paras� 1000 olarak tan�mlanm��t�r. �ste�e ba�l� olarak de�i�tirilebilir.
	int k; //switch-case yap�s� i�in tan�mlanm��t�r.
	char kullaniciadi[6]="bulut"; //Kullan�c� ad� "bulut" olarak tan�mlanm��t�r.
	char kullanici[30]="0";
	int adkontrol=0;
	int kullanicisifresi=2013; //Kullan�c� �ifresi 2013 olarak tan�mlanm��t�r.
	int sifre;
	char cevap; //do-while yap�s� i�in tan�mlanm��t�r.
	printf("\n\t\t\t =Banka Hesap Sistemi Programi=\n");
	for(;;) //Kullan�c� ad� giri�i i�in sonsuz d�ng� olu�turulmu�tur. �ste�e ba�l� olarak while(1) sonsuz d�ng�s� de kullan�labilir.
	{ 
		printf("\n Kullanici Adinizi Giriniz:");
		scanf("%s",kullanici);
		fflush(stdin); //Girilen veri de�i�kene aktar�ld�ktan sonra gerekli alan bo�alt�lmaktad�r.
		adkontrol=strcmp(kullanici,kullaniciadi); //kullanici ile kullaniciadi dizileri kar��la�t�r�lmaktad�r.
		if(adkontrol!=0) //Kullan�c�n�n girmi� oldu�u kullan�c� ad�yla, sistemde kayitli kullan�c� ad�n�n uyu�mamas� halinde if komutu �al���r. 
		{ 	 
			printf("\n Yanlis Kullanici Adi Girdiniz.\n");
			printf(" Lutfen Tekrar Deneyiniz.\n");
			printf("\n Lutfen Bekleyiniz...");
			Sleep(2000); //Programa ger�eklik katmas� amac�yla kullan�lm��t�r.
			system("CLS"); //Ekrandaki her �eyin silinmesi sa�lanmaktad�r.
			printf("\n\n");
			continue; //Tekrar for d�ng�s�ne d�n�lmesi sa�lanmaktad�r.
		}
         
		else //Kullan�c�n�n girmi� oldu�u kullan�c� ad�yla, sistemde kayitli kullan�c� ad�n�n uyu�mas� halinde else komutu �al���r.
		{   
			printf("\n Kullanici Adiniz Dogrulanmaktadir...");
			Sleep(2000);
			system("CLS");
			printf("\n Kullanici Adiniz Dogrudur.\n");
			break; //for d�ng�s�nden ��k�� sa�lanmaktad�r.
		}
  	
	}
   	for(;;) //Kullan�c� �ifresi giri�i i�in sonsuz d�ng� olu�turulmu�tur. �ste�e ba�l� olarak while(1) sonsuz d�ng�s� de kullan�labilir.
	{ 
	    printf("\n Lutfen Kullanici Sifrenizi Giriniz:");
	    scanf("%d",&sifre);
	    fflush(stdin); //Girilen veri de�i�kene aktar�ld�ktan sonra gerekli alan bo�alt�lmaktad�r.
	    if(kullanicisifresi!=sifre) //Kullan�c� taraf�ndan girilen �ifre, sistemde kay�tl� olan kullan�c� �ifresine e�it de�ilse if komutu �al���r. 
	    {	 
		    printf("\n Yanlis Sifre Girdiniz.\n");
	            printf(" Lutfen Tekrar Deneyiniz.\n");
		    printf("\n Lutfen Bekleyiniz...");
		    printf("\n\n");
		    Sleep(2000);
		    system("CLS");
		    continue; //Tekrar for d�ng�s�ne d�n�lmesi sa�lanmaktad�r.
            }

	    else //Kullan�c� taraf�ndan girilen �ifre, sistemde kay�tl� olan kullan�c� �ifresine e�it ise else komutu �al���r.
	    {   
		    printf("\n Kullanici Sifreniz Dogrulanmaktadir...");
		    Sleep(2000);
		    system("CLS");
		    printf("\n Kullanici Sifreniz Dogrudur.\n\n");
		    Sleep(1000);
		    system("CLS");
		    printf("\n Hosgeldiniz, ");
		    printf("%c\n",puts(kullanici)); //Kullan�c�n�n, kullan�c� ad� ekrana yaz�lmaktad�r.
		    do
		    { 
			Menu: //goto fonksiyonu i�in kullan�lm��t�r.
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
				case 1: //Hesap bakiyesi g�r�nt�leme.
					system("CLS");
					printf("\n Hesap Bakiyesi Goruntuleme");
					printf("\n --------------------------");
					printf("\n\n Hesabinizda Bulunan Para: %d TL \n",bakiye);
					printf("\n\n");
					break;

				case 2: //Hesaba para yat�rma.
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

				case 3: //Hesaptan para �ekme.
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

				case 4: //Para g�nderme.
					while(1)
					{	
						system("CLS");
						printf("\n Para G�nderme");
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

				case 5: //Banka sisteminden ��k�� yapma.
					system("CLS");
					printf("\n");
					goto cikis; //Kullan�c� direkt olarak ��k��a y�nlendirilir. (NOT: goto kullan�m� tavsiye edilmez. Bunun yerine d�ng�ler kullan�labilir.)
       
					default: //Kullan�c�n�n 1-2-3-4-5 d���nda bir se�enek girmesi halide default yap�s� �al���r.
					system("CLS");
					printf("\n Boyle Bir Islem Secenegi Yoktur. Lutfen Tekrar Deneyiniz.\n");
					printf("\n");
					goto Menu; //Kullan�c� direkt olarak men�ye y�nlendirilir.
					break;
			} 
			printf(" Baska Islem Yapmak Istiyor Musunuz? ( (E)vet - (H)ayir )");
			cevap=getch(); //Kullan�c�n�n cevab� cevap de�i�kenine aktar�lmaktad�r.
			system("CLS");
			printf("\n");
		}
		while(cevap=='E' || cevap=='e'); //cevap de�i�keninin 'E' veya 'e' olmas� halinde men� ekrana gelecektir.
		if(cevap=='H' || cevap=='h') //cevap de�i�keninin 'H' veya 'h' olmas� halinde d�ng�den ��k�lacak ve ��k�� i�lemi ger�ekle�ecektir.
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
	getch(); //Herhangi bir tu�a bas�ld���nda program kapanacakt�r.
}

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int a,b,c,d,e,f,h;
	int beden,pant;
	
	h = (a >=10 && a <=19);
	b = (b >=20 && b <=29);
	c = (c >=30 && c <=39);
    d = (d >=40 && d <=49);
	e = (e >=50 && e <=59);
	f = (f >=60 && f <=69);
	

	printf("insan bedeni gir : ");
	scanf("%d",&beden);
	printf("pantolon bedeni gir : ");
	scanf("%d",&pant);
	
	if((beden==h) && (pant==h))
		printf("tam");
	else if((beden>=20 && beden<=29) && (pant>=20 && pant<=29))
		printf("tam");
	else if((beden>=30 && beden<=39) && (pant>=30 && pant<=39))
		printf("tam");
	else if((beden>=40 && beden<=49) && (pant>=40 && pant<=49))
		printf("tam");
	else if((beden>=50 && beden<=59) && (pant>=50 && pant<=59))
		printf("tam");
	else if((beden>=60 && beden<=69) && (pant>=60 && pant<=69))
		printf("tam");
		

	else if((beden>=20 && beden<=29) && (pant>=10 && pant<=19))
		printf("dar");
	else if((beden>=30 && beden<=39) && (pant>=10 && pant<=19))
		printf("cok dar");
	else if((beden>=40 && beden<=49) >= (pant>=10 && pant<=19))
		printf("cok cok dar");

	
	
	else if((pant>=20 && pant<=29) && (beden>=10 && beden<=19))
		printf("bol");
	else if((pant>=30 && pant<=39) && (beden>=10 && beden<=19))
		printf("cok bol");
	else if((pant>=40 && pant<=49) && (beden>=10 && beden<=19))
		printf("cok cok bol");
	else if((pant>=50 && pant<=59) && (beden>=10 && beden<=19))
		printf("cok cok bol");
	else if((pant>=60 && pant<=69) && (beden>=10 && beden<=19))
		printf("cok cok bol");
		
	else if(pant<10 && beden<10){
		printf("hatali girdi . pantolon bedeni cok kucuk\n");
		printf("hatali girdi . insan bedeni cok kucuk");
	}
	else if(pant>=70 && beden>=70){
		printf("hatali girdi . pantolon bedeni cok buyuk\n");
		printf("hatali girdi . insan bedeni cok buyuk");
	}
	else if(pant>=70 && beden<10){
		printf("hatali girdi . pantolon bedeni cok buyuk\n");
		printf("hatali girdi . insan bedeni cok kucuk");
	}
		else if(beden>=70 && pant<10){
		printf("hatali girdi . pantolon bedeni cok kucuk\n");
		printf("hatali girdi . insan bedeni cok buyuk");
	}
	else if(beden<10)
		printf("hatali girdi . insan bedeni cok kucuk");
	else if(beden>=70)
		printf("hatali girdi . insan bedeni cok buyuk");
	else if(pant>=70)
		printf("hatali girdi . pantolon bedeni cok buyuk");
	else if(pant<10)
		printf("hatali girdi . pantolon bedeni cok kucuk");

	return 0;
	
}

#include<stdio.h>

float degis(float *a, float *b , float *c){

	float *yeni,x=0;
	yeni=&x;

	*yeni = *a;
	*a=*b;
	*b=*c;
	*c=*yeni;
}

int main(){

	float a=10,b=20,c=30;

	degis(&a,&b,&c);

	printf("%.2f \n%.2f \n%.2f",a,b,c);
}


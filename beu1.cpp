#include<stdio.h>

int main(){
	
int s1,s2,s3,ortalama,min,max;


printf("birinci sayiyi giriniz :");
scanf("%d",&s1);
printf("ikinci sayiyi giriniz :");
scanf("%d",&s2);
printf("ucuncu sayiyi giriniz :");
scanf("%d",&s3);

if(s1>s2){
	min=s2;
	max=s1;
}
else{
	min=s1;
	max=s2;
}

if(s3<min){
	min=s3;
	
}
else if(s3>max){
	max=s3;
	
}

printf("en buyuk sayi : %d",max);
printf("\nen kuyuk sayi : %d",min);



/*
printf("birinci sayiyi giriniz :");
scanf("%d",&s1);
printf("ikinci sayiyi giriniz :");
scanf("%d",&s2);
printf("ucuncu sayiyi giriniz :");
scanf("%d",&s3);

ortalama=(s1+s2+s3)/3;

if(s1>s2 && s1>s3 )		
{
	printf("\nbirinci sayi en buyuktur");
	printf("\nortalama :%d",ortalama);		
}

	
if(s2>s1 && s2>s3)		
{
	printf("\nikinci sayi en büyüktür");
	printf("\nortalama :%d",ortalama);
	
}

if(s3>s2 && s3>s2)		
{
	printf("\nucuncu sayi en büyüktür");
printf("\nortalama :%d",ortalama);
	
}
*/
}

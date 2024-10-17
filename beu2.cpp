#include<stdio.h>

int main(){

int puan;

printf("puaninizi giriniz :");
scanf("%d",&puan);

if(puan<0 || puan >100)
{
	printf("hatali giris yaptiniz !!");
}

else
{

if(puan>=90 && puan<100)
{printf("A");
}


else if(puan>=80 && puan<90)
{printf("B");

}

else if(puan>=70 && puan<80)
{printf("C");
}


else if(puan>=60 && puan<70)
{printf("D");
}

else if(puan>=0 && puan<60)
{printf("F");
}

}}

#include<stdio.h>
int main(){
	
	int i,sayac=0;

	for(i=0;i<=50;i++)
	{	
		if(i%5==0)
		{
			printf("%d \n",i);
			sayac++;
		}
	}
printf("%d toplam.",sayac);
	return 0;
	
}

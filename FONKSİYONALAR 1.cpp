#include<stdlib.h>
#include<stdio.h>
int main()
{
	int i;
	int sayac=0;
	
	for(i=0;i<=50;i+=3)
	{
		if(i%7==0 && i%15!=0)
		{
			printf("%d ",i);
			sayac++;
		}
	}
	printf("\n%d tane sayi var.",sayac);

}


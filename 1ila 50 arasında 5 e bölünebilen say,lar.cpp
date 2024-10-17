#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	int sayac=0;
	
	for(i=1;i<=50;i++)
	{
		if(i%5==0)
		{
			printf("%d\n",i);
			sayac++;
		}
	}
	printf("\n %d tane",sayac);

}

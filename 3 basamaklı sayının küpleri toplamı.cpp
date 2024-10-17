#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,bb,ob,yb,toplam =0,sayac=0;
	
	for(i=100;i<1000;i++)
	{
		yb = i/100;
		bb = i%10;
		ob = (i%100)/10;
		
		toplam = (yb*yb*yb)+(ob*ob*ob)+(bb*bb*bb);
		
		if(toplam==i)
		{
			sayac++;
			printf("degerler --> %d \n",toplam);	
			
		}
		
	}
	
	printf("\ndegerler toplami --> %d",sayac);	
	
	return 0;
}

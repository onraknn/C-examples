#include<stdio.h>
int main()
{
	
	int sayac=0;
	int i,yb,ob,bb;
	
	for(i=100;i<=999;i++)
	{
	yb = i/100;
	ob = (i/10)%10;
	bb = i%10;
	
	if(yb!=ob && yb!=bb && bb!=ob)
	{
		sayac++;	
	}
		
	}
		printf("%d",sayac);
		
}

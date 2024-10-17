#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	int i;
	i=1;
    int sayac=0;
	
	while(i<=50)
	{
		if(i%2==0 && i%3==0)
		{
			printf("%d\n",i);
		sayac++;
		}
           i++;
	}

	printf("%dtane var",sayac);
	
	
	
	
	
	
	
	
	
}

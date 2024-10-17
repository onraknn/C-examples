#include<stdio.h>
#include<stdlib.h>

int main()
{
	int dizi[3] [3];
	
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		
		printf("%d.satirin>%d. sayisini giriniz :",i+1,j+1);
		scanf("%d",&dizi[i][j]);
    }
}

   printf("\n sonuc\n");
   for(i=0;i<3;i++)
    {
    	for(j=2;j>=0;j--)
    	{
    		printf("%d |",dizi[j][i]);
		}
		printf("\n");
	}	
	
}


#include<stdio.h>
#include<stdlib.h>
int main()
{
	/*
	
	int i,j;
	int m1[2][2]={10,20,30,40};
	int m2[2][2]={50,60,70,80};
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",m1[i][j],m2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",m1[i][j]+m2[i][j]);
		}
		printf("\n");
	}
	
	*/
	
	int i,j,satir,sutun;

	
	printf("satiri gininiz : ");
	scanf("%d",&satir);
	
	printf("sutunu gininiz : ");
	scanf("%d",&sutun);
	
	int m1[satir][sutun];
	int m2[satir][sutun];
	
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf("1. matrisin [%d]-[%d]----> ",i+1,j+1);
			scanf("%d",&m1[i][j]);
			
			printf("2. matrisin [%d]-[%d]----> ",i+1,j+1);
			scanf("%d",&m2[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf("1. matrisin %d \n",m1[i][j]);
			printf("2. matrisin %d ",m2[i][j]);
		}
		printf("\n");
	}
			
}

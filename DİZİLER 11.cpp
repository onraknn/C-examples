#include<stdio.h>
#include<stdlib.h>
int main()
{
	int en,boy,i,j;
	
	printf("boy degerini giriniz:");
	scanf("%d",&boy);
	printf("en degerini giriniz:");
	scanf("%d",&en);
	
	for(i=1;i<=boy;i++)
	{
		for(j=1;j<=en;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	
}

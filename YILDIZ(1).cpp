#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	int i,j;
	
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(j==i || j+i==8)
			{
				printf("*");
			}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	

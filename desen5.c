#include<stdio.h>

int main(){
	
	int i,j,k;
	
	for(i=0;i<6;i++){
		
		for(j=0;j<=i;j++)
			printf("*");
		
		for(k=0;k<1;k++)
			printf(" ");
			
		for(j=0;j<=i;j++)
			printf("*");
				
		printf("\n");	
	}	
	
	return 0;
}

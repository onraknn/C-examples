#include<stdio.h>

int main(){
	
	int i,j,n=6;
	
	for(i=1;i<=n;i++){
		
		for(j=n-i;j>=1;j--)	
			printf(" ");
		
		for(j=0;j<i*2-1;j++)		
			printf("*");
		
		printf("\n");
	}	
	
	for(i=n-1;i>0;i--){
		
		for(j=n-i;j>0;j--)	
			printf(" ");
		
		for(j=2*i-1;j>0;j--)		
			printf("*");
		
		printf("\n");
	}	
	return 0;
}

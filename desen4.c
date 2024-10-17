#include<stdio.h>

int main(){
	
	int i,j,k,l,yildiz=0,yildiz1=8;
	
	for(i=6;i>0;i--){
		
		for(j=1;j<i;j++)
			printf(" ");
		
		for(k=0;k<=yildiz;k++)
			printf("*");
			
		yildiz+=2;		
		printf("\n");
	}	
	
	return 0;
}

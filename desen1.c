#include<stdio.h>


int main(){
	
	int i,j;
	
	
	for(i=0;i<8;i++){
		
		for(j=8;j>i;j--){
			
			printf("*");
		}
		printf("\n");
		
	}
	
	
	
	return 0;
}

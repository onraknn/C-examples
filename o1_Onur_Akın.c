/* Onur Akýn 212106206002*/
#include<stdio.h>
int main(){	
	int n,k,i;		
	printf("N ve K girin : ");
	scanf("%d %d",&n,&k);
	int dizi[n];
	
	if(n<=0 || k<=0)
		printf("Gecersiz girdi ");		
	else{
		printf("A_i girin : ");	
		for(i=0;i<n;i++){
			scanf("%d",&dizi[i]);
		
		if(dizi[i]<=0){	
				printf("Gecersiz girdi");
				return 0;
			}
		}
		for(i=0;i<n;i++){

			if(dizi[i]<=k){
				k=k-dizi[i];
				printf("1");
			}			    		
			else if(dizi[i]>k)
				printf("0");		
		  }		
   }	
	return 0;
}

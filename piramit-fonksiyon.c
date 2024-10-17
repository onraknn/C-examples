

// 1. örnek  -------------------------------------------------------------------------------



#include<stdio.h>

void piramit(){
	
	int i,j,k,bosluk=4,yildiz=1;
	
	for(i=0;i<5;i++){
		
		for(j=0;j<bosluk;j++){
			
			printf(" ");		
		}
		
		for(k=0;k<yildiz;k++){
			
			printf("*");
		}
		
		printf("\n");
		
		bosluk--;
		yildiz+=2;
	}
	
}


int main(){
	
	piramit();
}




/*

// 2. örnek  -------------------------------------------------------------------------------

#include<stdio.h>

void piramit(){
	
	int i,j,t;
	int deger;
	int yildiz = 1;
	
	printf("deger giriniz : ");
	scanf("%d",&deger);
	
	int bosluk = deger-1;
	
	printf("\n");

	for(i=0;i<deger;i++){
		
		for(j=0;j<bosluk;j++){
			
			printf(" ");
		}
		
		for(t=0;t<yildiz;t++){
			
			printf("*");
		}
		printf("\n");
		
		yildiz+=2;
		bosluk--;
	}	
}

int main(){
	
	piramit();
	
}

*/



// 3. örnek  -------------------------------------------------------------------------------



/*

#include<stdio.h>

void baklava(){
	
	int i,j,n,k,l;	
	
	int ustbosluk = 3 ;
	int ustyildiz = 1 ;	
	
	int altbosluk = 1 ;
	int altyildiz = 5 ;
	
	
	for(i=0;i<4;i++){ // satýr sayýmýz 
		
		for(j=0; j<ustbosluk; j++){ //boþluk sayýmýz 
			printf(" ");
		}
		
		for(n=0; n<ustyildiz; n++){  // yildiz sayýmýz
			printf("*");
		}
		printf("\n");
		
		ustbosluk--;
		ustyildiz+=2;
	}	
	
	for(k=3;k>0;k--){
		
		for(j=0; j<altbosluk; j++){ //boþluk sayýmýz 
			printf(" ");
		}
		
		for(n=0; n<altyildiz; n++){  // yildiz sayýmýz
			printf("*");
		}
		printf("\n");
		
		altbosluk++;
		altyildiz-=2;
	}

}

int main(){
	
	baklava();
	
}

*/

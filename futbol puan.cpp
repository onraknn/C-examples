#include<stdio.h>
int main(){
	
	int skor[10]{2,1,0,0,2,1,1,2,1,0};
	
	int i,puan=0;
	
	for(i=0;i<10;i++){
		if(skor[i]==2){
			puan+=3;
			printf("alinan puan 3\n");
		}
		if(skor[i]==1){
			puan+=1;
			printf("alinan puan 1\n");
		}
		if(skor[i]==0){
			puan+=0;
			printf("alinan puan 0\n");
		}
		printf("toplam puan : %d\n\n",puan);
	}
	
}

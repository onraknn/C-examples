#include<stdio.h>
int main(){
	
	int s,i;
	float ort=0,top=0;
	
	printf("sayi gir : ");
	scanf("%d",&s);
	
	int dizi[s];	
	
	for(i=0;i<s;i++){
		
		printf("%d. sayi : ",i+1);
		scanf("%d",&dizi[i]);
		top+=dizi[i];
	}
	
	ort=top/s;
	
	printf("ortalama : %1.2f",ort);
	
	return 0;
}



#include <stdio.h>

struct dprizma{
	int uzunluk1,uzunluk2,uzunluk3;
};

typedef struct dprizma prizma;

int dhacim(prizma a){
		return a.uzunluk1 * a.uzunluk2 * a.uzunluk3;
}

int main(){
	prizma n;
	printf("3 adet uzunluk gir:  ");
	scanf("%d%d%d",&n.uzunluk1,&n.uzunluk2,&n.uzunluk3);
	printf("sonuc : %d",dhacim(n));
}

/*
void buyut(char *dizgi){
	int i;
	for(i = 0; i < 100; i++){
		if(dizgi[i] >= 'a' && dizgi[i] <= 'z'){
			dizgi[i] -= 'a' - 'A';
		}
	}
}

int main(){
	char *dizgi;
	int i ;
	dizgi = (char *)malloc(100*sizeof(char));
	
	for(i = 0; i<10; i++){
		printf("dizgi gir");
		scanf("%s",dizgi);
		buyut(dizgi);
		printf("%s\n", dizgi);
	}
	
}
*/
/*
void ters(int dizi[12],int boy){
	int gecici[boy];
	int i,j;
	for(i = 0; i < boy; i++){
		gecici[i] = dizi[i];
	}
	for(i = 0,j = 11; i < boy, j >= 0; i++,j--){
		dizi[i] = gecici[j];
	}
}


int main(){
	int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 , 11, 12};
	int boy = 12, i;
	ters(A,boy);
	for(i = 0; i < boy; i++){
		printf("%d\n",A[i]);
	}
	return 0;
}
*/
/*
int main(){
	
	int matris[4][4];

	int i, j;
	
	for(i = 0; i<4;i++){
		printf("%d.satiri gir : ",i+1);
		for(j = 0; j < 4; j++){
			scanf("%d",&matris[i][j]);
		}
	}
	
	for(i = 0; i<4;i++){
		
		for(j = 0; j < 4; j++){
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	int toplam = 0;
	for(i = 0; i < 4; i++){
	 toplam += matris[i][i];
	
	}
	printf("ortalama : %d", toplam/4);
		
	
	return 0;
}
*/

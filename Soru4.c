#include <stdio.h>

int main() {



	int n,i,t=1,g;

	printf("Eleman sayisi girin:");
	scanf("%d",&n);

	int diz[n];

	for(i=0;i<n;i++){
		printf("Eleman gir:");
		scanf("%d",&diz[i]);
	}

	while(t){
		t=0;
		for(i=0;i<n-1;i++){

			if(diz[i]>diz[i+1]){
				g=diz[i];
				diz[i]=diz[i+1];
				diz[i+1]=g;
				t=1;
			}
		}
	}
	printf("Sirali dizi:\n");
	for(i=0;i<n;i++){
		printf("%d ",diz[i]);
	}


	return 0;
}

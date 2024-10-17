#include <stdio.h>

int main() {

	int n,i,j,degis,*p;

	printf("Eleman sayisi girin:");
	scanf("%d",&n);

	p=(int*)malloc(n*sizeof(int));

	for(i=0;i<n;i++){
		printf("Eleman gir:");
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++){

		for(j=1;j<n-i;j++){

			if(p[j-1]>p[j]){

                degis=p[j-1];
                p[j-1]=p[j];
                p[j]=degis;
			}
		}
    }


	printf("Sirali dizi:\n");

	for(i=0;i<n;i++){
		printf("%d ",p[i]);
	}
	return 0;
}

#include<stdio.h>


int main(){

    int *sayilar;
    int n,i;

    printf("kac sayi girilecek ");
    scanf("%d",&n);

    sayilar = (int *)malloc(n*sizeof(int));

    for(i=0;i<n;i++){
        printf("\n%d. sayiyi gir : ",i+1);
        scanf("%d",sayilar[i]);

        printf("%d",sayilar[i]);
    }

return 0;
}

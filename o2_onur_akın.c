//Onur Akýn 212106206002

#include<stdio.h>

int main(){

    int n,i,puan=0;

    printf("N girin: ");
    scanf("%d",&n);

    if(n<0)
        printf("Gecersiz Girdi");

    else{

        char dizi[n];
        char dizi1[n];

        printf("Dogrulari Girin : ");
        scanf("%s",dizi);

        printf("Cevaplari Girin : ");
        scanf("%s",dizi1);

        for(i=0;i<n;i++){
            if(dizi[i]==dizi1[i]){
                puan++;
            }
            else if(dizi1[i]=='I'){
                continue;
            }
            else{
                i++;
            }
        }
            printf("puan : %d",puan);
            return 0;
    }


    return 0;
}

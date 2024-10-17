#include<stdio.h>
#include<stdlib.h>

int main(){

    float s,ort=0;
    int sayac=0,toplam=0;

    do{

        printf("sayi giriniz : ");
        scanf("%f",&s);
        sayac++;

        if(sayac==1 && s>400){
            printf("ilk deger 400den buyuk olamaz !!\n\n");
            sayac--;
            continue;
        }

        toplam+=s;

        ort=toplam/sayac;

        printf("ortalama = %.2f'dir.\n\n",ort);
    }

    while(ort<500);
    printf("%d tane sayinin ortalamasi = %.2f'dir.",sayac,ort);

return 0;
}

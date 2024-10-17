#include<stdio.h>
#include<stdlib.h>




int main(){

    //BOZUK--------------------------------
    /*

    int dizi[10];

    int i,max;

    for(i=0;i<10;i++){

        printf("dizinin %d. elemanini giriniz : ",i+1);
        scanf("%d",&dizi[i]);

    }
    max =dizi[0];

    for(i=1;i<10;i++){

       if(max<dizi[i]){
        max=dizi[i];
     }
    }
    for(i=0;i<10;i++){
        printf("%d\t",dizi[0]);
    }

*/





/*---------------------------------

    int i,max,dizi[]={10,2,5,9,6};

    max = dizi[0];

    for(i=1;i<5;i++) {

       if(max<dizi[i]){
            max = dizi[i];
       }
    }
    printf("max = %d",max);

*/


int i,max=0,eb=0,dizi[]={18,37,4,10,16,55,30};

for(i=0;i<7;i++){

    if(max<dizi[i]){
        max=dizi[i];
        eb++;
    }
}

printf("en buyuk deger = %d , dizinin %d. indeksindedir.",max,eb);









return 0;
}

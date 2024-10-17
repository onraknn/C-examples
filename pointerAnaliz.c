#include<stdio.h>


void degistir(int *x,int *y){

    int yeni;

    yeni = *x;
    *x=*y;
    *y=yeni;



}

int main(){

    int x=5,y=4;
    printf("eski deger : %d",x);
    printf("\neski deger : %d",y);

    degistir(&x,&y);

    printf("\n\nyeni deger : %d",x);
    printf("\nyeni deger : %d",y);
}

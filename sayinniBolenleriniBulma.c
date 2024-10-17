#include<stdio.h>

int main(){

    int sayi,bol=2;

    printf("sayi gir : ");
    scanf("%d",&sayi);

    while(sayi>1)
    {
        if(sayi%bol==0)
        {
            sayi=sayi/bol;
            printf("%d\n",bol);
        }
        else
            bol++;
    }
    return 0;
}

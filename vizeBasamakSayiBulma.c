#include <stdio.h>

int basamakSayi(int s){

int basamak=0;

    do{
        s=s/10;
        basamak++;
    }

    while(s!=0);

    return basamak;
}

int main() {
	int s;
	printf("Sayi gir: ");
	scanf("%d", &s);
	printf("%d, %d basamaklidir\n", s, basamakSayi(s));
	return 0;
}



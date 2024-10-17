#include <stdio.h>
int basamaksayi(int a) {

    int sayac=0;

    do{

        a=a/10;
        sayac++;

    }
    while(a!=0);
    return sayac;

}
int main() {
	int s;
	printf("sayi gir:");
	scanf("%d",&s);
	printf("%d, %d basamakidir",s,basamaksayi(s));
return 0;
}


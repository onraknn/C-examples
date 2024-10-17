#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

struct kitapbilgi{
	char kitapad[20];
	char yazarad[20];
	int fiyat;
	float puan;
};

int main()
{
	struct kitapbilgi kb{"alacakaranlik","stephenMeyer",10,7.25};
	printf("%s\n",kb.kitapad);
	printf("%s\n",kb.yazarad);
	printf("%d\n",kb.fiyat);
	printf("%.2f",kb.puan);
}

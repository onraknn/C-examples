#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	int dizi[2][2];
	
	dizi[0][0]=10;
	dizi[0][1]=20;
	dizi[1][0]=30;
	dizi[1][1]=40;
	
	printf("matrisin 0-0 noktasindaki degeri:%d\n",dizi[0][0]);
	printf("matrisin 0-1 noktasindaki degeri:%d\n",dizi[0][1]);
	printf("matrisin 1-0 noktasindaki degeri:%d\n",dizi[1][0]);
	printf("matrisin 1-1 noktasindaki degeri:%d",dizi[1][1]);
}

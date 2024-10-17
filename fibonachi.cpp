#include<stdio.h>
int main(){
	
	int i;
	int sayac = 0;
	int sayac2 = 0;

	for(i=1;i<=41;i+=4)
	{	
		sayac=sayac+i;
		sayac2++;
	}
	
printf("sayac toplami = %d",sayac);
printf("\nsayac adeti = %d",sayac2);

	return 0;
	
}

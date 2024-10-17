#include<stdio.h>

void kareyiYaz(int *x){


	*x*=*x;
}


int main(){

	int a=11,b=20;
	printf("a= %d\tb= %d\n",a,b);
	kareyiYaz(&a);
	kareyiYaz(&b);
	printf("a= %d\tb= %d\n",a,b);

	return 0;
}

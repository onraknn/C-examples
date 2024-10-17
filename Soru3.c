#include <stdio.h>


void kareyiyaz(int *a) {

	*a=(*a)*(*a);

}
int main() {
	int a=11,b=20;
	printf("a=%d\tb=%d",a,b);
	kareyiyaz(&a);
	kareyiyaz(&b);
	printf("\na=%d\tb=%d",a,b);
return 0;
}


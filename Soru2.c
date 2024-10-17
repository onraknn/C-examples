#include <stdio.h>

int maxEleman(int X[] ,int b) {

    int i;
    int eb;
    eb=X[0];

    for(i=1;i<b;i++){
        if(X[i]>eb){
            eb=X[i];
        }
    }
    return eb;


}
int main() {
	int A[7] = {50, -20, 30, 70, -40, -10, 60};
	int B[9] = {5, 10, -5, 35, -10, 20, -15, 15, 25};
	printf("A dizisinde max eleman = %d\n", maxEleman(A,7));
	printf("B dizisinde max eleman = %d\n", maxEleman(B,9));
return 0;
}


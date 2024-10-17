#include <stdio.h>

int main()
{	
	int sayi;
    
    do{   	
    	printf("bir sayi giriniz : ");
    	scanf("%d",&sayi);
	}
	  
    while(sayi<=0);
    	
    	if(sayi>0)
    	    printf("%d",sayi*(sayi+1)/2);

    return 0;
}

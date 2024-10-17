#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    char ders;
    
    printf("ders kodunu giriniz(t,f,m,s):");
    scanf("%c",&ders);
    
    switch(ders)
    {
    	case 't':
    		printf("girilen kod turkce.");
    		break;
    	
    	case 'm':
    		printf("girilen kod matematik.");
    		break;
    	
    	case 's':
    		printf("girilen kod sosyal bilgiler.");
    		break;
    	
    	case 'f':
    		printf("girilen kod fen bilgisi.");
    		break;
    	default:
    		printf("hatali harf girisi veya buyuk harf girisi !!!");
    		break;
	}

}

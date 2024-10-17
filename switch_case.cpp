#include<stdio.h>
int main(){
	
	char harf;
	
printf("harf gir (t,m,s,f) :");

scanf("%c",&harf);
	
	switch(harf)
	{
		case 't':
	    case 'T':
			printf("turkce");
			break;
			
		case 'm':
	    case 'M':
			printf("matematik");
			break;
		
		case 'f':
	    case 'F':
			printf("fen");
			break;
		
		case 's':
	    case 'S':
			printf("sosyal");
			break;
			
		default:
			printf("hatali giris");
	}
	
	return 0;
	
}

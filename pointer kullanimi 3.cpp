#include<stdio.h>
int main()
{
	char harf ='k';
	char *pt = &harf;
	
	printf("%c'nin adresi = ",harf);
	printf("%x\n",pt); //62fe17
	pt++;
	printf("%c'nin yeni adresi = ",harf);
	printf("%x",pt); //62fe18 

}

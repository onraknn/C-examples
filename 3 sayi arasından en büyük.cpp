#include<stdio.h>
int main()
{
	int s1,s2,s3;
	
	printf("uc sayi giriniz :");
	scanf("%d %d %d", &s1, &s2, &s3);
	
	if(s1>s2 && s1>s3)
		printf("en buyuk sayi %d",s1);
	
	else if(s2>s3 && s2>s1)
		printf("en buyuk sayi %d",s2);

	else if(s3>s1 && s3>s2)
		printf("en buyuk sayi %d",s3);
		return 0;
}


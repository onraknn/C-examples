#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<Math.h>

int main()
{
	char nereden[30]="istanbuldan tekirdaga";
	char nereye[30]="";
	
	strncpy(nereye,nereden,5);
	printf("%s",nereye);
		
}

#include "stdio.h"
int main()
{
	int TempC;
	int TemF;


	printf("Enter Temp Celsius=");
	scanf("%d",&TempC);

	TemF=(TempC*9)/5 + 32 ;
	printf("Temp Fahrenheit=%d\n",TemF);


	printf("Enter Temp Fahrenheit=");
	scanf("%d",&TemF);

	TempC=((TemF-32)*5)/9;
	printf("Tem Celsius=%d\n",TempC);

	return 0;
}
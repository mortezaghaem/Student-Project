#include "stdio.h"
int main()
// barname 2 ta aad migire va hasele jam-tafrigh-zarb-taghsim ra neshan midehad.
{
	int Number1; 
	int Number2;

	int Sum; // jam 2 add vorudi dar Sum negah dari mishavad.
	int Minus; // tafrighe  2 add vorudi dar Minus negah dari mishavad.
	int Multiply; // zarb 2 add vorudi dar Multiply negah dari mishavad.
	int Divide; // taghsim 2 add vorudi dar Divide negah dari mishavad.

	printf("Enter a Numbers :\n");
	scanf(" %d",&Number1);
	printf("Enter Another Number :\n");
	scanf("%d",&Number2);

	Sum=Number1+Number2;
	Minus=Number1- Number2;
	Multiply=Number1*Number2;
	Divide=Number1/Number2;

	printf("Sum is :%d \n",Sum);
	printf("Minus is :%d \n",Minus);
	printf("Multiply is :%d \n",Multiply);
	printf("Divide is :%d \n",Divide);


	return 0;
}
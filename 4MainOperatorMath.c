#include "stdio.h"
int main()

{
	int Number1;
	int Number2;
	int Sum,Minus,Multiply,Divide;

	printf("Enter 2 Numbers\n");
	scanf(" %d %d",&Number1,&Number2);

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
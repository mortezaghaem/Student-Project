#include "stdio.h"
int main()
{
	int Number1,Number2,Number3;
	int Sum,Minus,Multiply;

	printf("Enter Number1=\n");
	scanf("%d",&Number1);

	printf("Enter Number2=\n");
	scanf("%d",&Number2);


	printf("Enter Number3=\n");
	scanf("%d",&Number3);

	if (Number3== 0)
		{
		Sum=Number1+Number2;
	    printf("Sum Number1 & Number2=%d\n",Sum);
	    }

	else if (Number3 < 0)
	    {
		Minus=Number1- Number2;
		printf("Minus Number1 & Number2=%d\n",Minus);
	    }

	else
		{ 
		Multiply=Number1*Number2;
		printf("Multiply Number1 & Number2=%d\n",Multiply);		
	    }

	return 0;
}
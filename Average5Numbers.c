#include "stdio.h"
int main()
{
	int Number1,Number2,Number3,Number4,Number5;
	int Sum;
	int Average;

	printf("Enter Number1=\n");
	scanf("%d",&Number1);

	printf("Enter Number2=\n");
	scanf("%d",&Number2);

	printf("Enter Number3=\n");
	scanf("%d",&Number3);

	printf("Enter Number4=\n");
	scanf("%d",&Number4);

	printf("Enter Number5=\n");
	scanf("%d",&Number5);

	Sum=Number1+Number2+Number3+Number4+Number5;
	printf("Sum=%d\n",Sum);

	Average=Sum/5;
	printf("Average=%d\n",Average);	

	return 0;
}
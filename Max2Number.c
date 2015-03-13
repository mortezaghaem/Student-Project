#include "stdio.h"
int main()
{
	int Number1;
	int Number2;
	printf("Enter Two Numbers :\n");
	scanf("%d %d",&Number1,&Number2);
	if (Number1 > Number2)
		printf("Number1 is Max\n");
	else 
		printf("Number2 is Max\n");
	/* code */
	return 0;
}
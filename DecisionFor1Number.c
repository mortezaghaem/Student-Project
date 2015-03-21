#include "stdio.h"
int main()
{

	int Number;
	//int Number2;

	printf("Enter a Number=");
	scanf("%d",&Number);

	if ( Number < 0 )
		{
		Number=Number*-1;
		printf("Number=%d\n",Number);
		}

	else if (Number > 0)
	//if  (Number > 0 )
		{
		Number=Number*Number;
		printf("Number=%d\n",Number);
		}

	else
	//if (Number == 0 )   
	   {
	   	printf("Enter Another Number=");

	    scanf("%d",&Number);
			if ( Number < 0 )
			{
			Number=Number*-1;
			printf("Another Number=%d\n",Number);
			}

			else if  (Number > 0 )
			{
			Number=Number*Number;
			printf("Another Number=%d\n",Number);
			}
		}	
	return 0;
}
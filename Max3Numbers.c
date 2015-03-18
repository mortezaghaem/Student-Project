#include "stdio.h"
int main()
{
	int Number1;
	int Number2;
	int Number3;
printf("Enter 3 Numbers\n");
scanf("%d %d %d",&Number1,&Number2,&Number3);
	if (Number1>Number2)
	 {
		printf("Number1 is More than Number2\n");
	
		if (Number1> Number3)

		{
			printf("Number1 is Max\n");
		}
	 }

	 
	 	 if (Number2>Number1 && Number2>Number3)
	 	{
	 		printf("Number2 is Max\n");
	 		
	 		
		}
		 if (Number3>Number1 && Number3>Number2)
		 	printf("Number3 is Max\n");
	 // 3 add ra az vorudi migire va moghayese mikone va add bozorgtar moshakhas mikone. 

		 
/*
else if (Number1 > Number3)
{
	printf("Number1 is More than Number3\n");
}
*/

/* if (Number1 > Number3)
 {
 	printf("Number1 is Max\n");
 }
 else
 {
 	printf("Number3 is Max\n");
 }
 */
	return 0;
}
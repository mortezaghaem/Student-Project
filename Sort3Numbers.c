#include "stdio.h"
int main()
{
	int Number1,Number2,Number3;


	printf("Enter 3 Numbers :\n");
	scanf("%d %d %d",&Number1,&Number2,&Number3);

	if ( Number1 > Number2 && Number1>Number3)
	//{
			{
			printf("Number1 is bigest = %d \n",Number1);

				if (Number2 > Number3)
					printf("Number2 is average= %d\n",Number2 );
				
				if (Number3 > Number2)
					printf("Number3 is average= %d\n",Number3);
				
				if (Number2 < Number3 )
				    printf("Number2 is low= %d\n",Number2);		 
				
				if (Number3 < Number2)
					printf("Number3 is low= %d\n",Number3);
			}
			

	if (Number2>Number1 && Number2>Number3)
	        {
		    printf("Number2 is bigest =%d \n",Number2);

			if ( Number1 > Number3)
				printf("Number1 is average=%d\n",Number1);
				
			if (Number3 > Number1)
					printf("Number3 is average= %d\n",Number3);
				
			if (Number1 < Number3 )
				    printf("Number1 is low= %d\n",Number1);		 
				
			if (Number3 < Number1)
					printf("Number3 is low= %d\n",Number3);	


		    }	

    if (Number3>Number1 && Number3>Number2)
		    {
		    printf("Number3 is bigest =%d \n",Number3);

		    if (Number1 > Number2)
		    	printf("Number1 is average=%d\n",Number1);

		    if (Number2 > Number1)
					printf("Number2 is average= %d\n",Number2);
				
			if (Number1 < Number2)
				    printf("Number1 is low= %d\n",Number1);		 
				
			if (Number2 < Number1)
					printf("Number2 is low= %d\n",Number3);

		    }

		
	return 0;
}
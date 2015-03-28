#include "stdio.h"
int main()
{
	int A,B,C;
	int Sum,Minus,Minus2,Multiply,Multiply2;
	int E,F,G,H;

	printf("Enter Number1=\n");
	scanf("%d",&A);

	printf("Enter Number2=\n");
	scanf("%d",&B);


	printf("Enter Number3=\n");
	scanf("%d",&C);

	Sum= A+B+C;
	printf("Sum 3 Numbers=%d\n",Sum);

	Minus= A-B;
	printf("A-B=%d\n",Minus);

	Minus2=A-C;
	printf("A-C=%d\n",Minus2);

	Multiply=B*C;
	printf("B*C=%d\n",Multiply);

	Multiply2=A*B*C;
	printf("A*B*C=%d\n",Multiply2);

	E=(2*A*B)+(A-B);
	printf("Result E=(2*A*B)+(A-B)=%d\n",E);

	F=A+B+10-(4*A*B);
	printf("Result F=A+B+10-(4*A*B)=%d\n",F);
 	
 	G=(A*B)-2*(A+B);
 	printf("Result G=(A*B)-2*(A+B)=%d\n",G);

 	H=(2*A)+(2*B)-2*(A*B);
 	printf("Result H=(2*A)+(2*B)-2*(A*B)=%d\n",H);

	return 0;
}
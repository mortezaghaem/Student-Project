#include "stdio.h"
int main()

{
   int Zel1,Zel2;
   int vatar;
   int Result1,Result2;

   printf("Zel1 va Zel2 ra vard konid=\n");
   scanf("%d %d",&Zel1,&Zel2);
   
   printf("vatar ra vard konid=\n");
   scanf("%d",&vatar);

   Result1=(Zel1*Zel1)+(Zel2*Zel2);
   Result2= vatar*vatar;

   if (Result1 == Result2)
    printf("Ghaem Zaviye bedast miayad\n");

   else
   	printf("mosalase ghaem zaviye tashkil NIMISHAVAD\n");

	return 0;
}
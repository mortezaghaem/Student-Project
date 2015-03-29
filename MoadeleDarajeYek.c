#include "stdio.h"
int main()

{
  int a,b;
  int x;

printf("Hal Kardan Moadele Daraje Aval\n");
printf("Shakle Koli Moadele: ax+b=0 \n");
printf("a ra vared kon=\n");
scanf("%d",&a);
printf("b ra vared kon=\n");
scanf("%d",&b);
if ( a == 0 && b== 0)
	printf("Moadele Mobham Ast\n");

//if (a==0 && (b > 0 || b<0) ) 
// baraye inke befahmim yek moteghayer mokhalef 0 mibashad be in sorat code minevisim: b!=0  
// code khate ghable dorost mibashad -agar be in sorat benevisim : (b > 0 || b<0) ghalat hast.

if ( a==0 && b!=0)   // agar "a" barabar ba 0 va "b" mokhalefe 0 bashad,dar natije Moadele Rishe Nadarad.
	printf("Moadele Rishe Nadarad\n");

if ( a!=0 && b==0) 
	printf("Javab Moadele 0 Mibashad\n"); 

if (( a!=0 ) && (b!=0 ))
	{  // IMPORTANT (for me Not Other): Hatman az parantez baz va baste baraye moshakhas kardane mahdode ejraye dastorate if estefade kon.
		// dar gheyre in sorat code : x=-1*(b/a)  hamishe ejra mishavad va "b" ra bar "a" taghsim mikonad.
	x=-1*(b/a); 
	printf("Javab Moadele=%d\n",x);
	}
	return 0;
}
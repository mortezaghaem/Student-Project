#include "stdio.h"
#include "math.h"  // gcc MoadeleDaraje2.c -o test -lm  ->>> 

/*The math library must be linked in when building the executable. How to do this varies by environment,
 but in Linux/Unix, just add -lm to the command:
gcc test.c -o test -lm
The math library is named libm.so, and the -l command option assumes a lib prefix and .a or .so suffix. */


int main()

{
  int a,b,c;
  int Delta;
  int x,x1,x2;
  double sqrtDelta;

printf("Hal Kardan Moadele Daraje 2\n");
printf("Shakle Koli Moadele: ax*x+bx+c=0 \n");

printf("a ra vared kon=\n");
scanf("%d",&a);

printf("b ra vared kon=\n");
scanf("%d",&b);

printf("c ra vared kon=\n");
scanf("%d",&c);

Delta=(b*b)-4*a*c;
if ( Delta < 0 )
	printf("Moadele Javab Haghighi Nadarad\n");

if ( Delta ==0 ) // Important : == ra ba = Eshtebah Nakon.
{
 	x=((-1*b)/(2*a));
 	printf("Moadele Rishe Mozaaf darad= %d\n", x);
}
if (Delta>0)
{
	sqrtDelta=sqrt(Delta);
	x1=((-1*b)+sqrtDelta)/2*a;
	x2=((-1*b)-sqrtDelta)/2*a;
	printf("Javab Moadele= %d %d\n",x1,x2);
}

return 0;
}
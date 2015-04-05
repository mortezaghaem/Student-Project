#include "stdio.h"

int main()
{

int Maliyat;
int HoghogheKol; 
int HoghoghePardakhti;

	printf("Barname Mohasebe Maliyat bar asase Hoghogh\n");
	printf("Moblaghe Kole Hoghog ra vard kon= \n");
	scanf("%d",&HoghogheKol);

if (HoghogheKol <=150000)
{
	printf("Moaf Az Maliyat\n");
	HoghoghePardakhti=HoghogheKol;
	printf("Hoghoge Pardakhti= %d\n",HoghoghePardakhti);
}

else if ( 150001 < HoghogheKol && HoghogheKol<230000)
{
	printf("10 darsad Maliyat\n");
	Maliyat=HoghogheKol*0.10;
	printf("Maliyat=%d\n",Maliyat);
	HoghoghePardakhti=HoghogheKol - Maliyat ;
	printf("Hoghoge Pardakhti= %d\n",HoghoghePardakhti);
}

else if ( 230001 < HoghogheKol && HoghogheKol<280000)
{
	printf("12 darsad Maliyat\n");
	Maliyat=HoghogheKol*0.12;
	printf("Maliyat=%d\n",Maliyat);
	HoghoghePardakhti=HoghogheKol - Maliyat ;
	printf("Hoghoge Pardakhti= %d\n",HoghoghePardakhti);
}

else if ( 280001 < HoghogheKol && HoghogheKol<380000)
{
	printf("15 darsad Maliyat\n");
	Maliyat=HoghogheKol*0.15;
	printf("Maliyat=%d\n",Maliyat);
	HoghoghePardakhti=HoghogheKol - Maliyat ;
	printf("Hoghoge Pardakhti= %d\n",HoghoghePardakhti);
}

else if ( 380000 < HoghogheKol )
{
	printf("20 darsad Maliyat\n");
	Maliyat=HoghogheKol*0.20;
	printf("Maliyat=%d\n",Maliyat);
	HoghoghePardakhti=HoghogheKol - Maliyat ;
	printf("Hoghoge Pardakhti= %d\n",HoghoghePardakhti);
}

	return 0;
}
#include "stdio.h"

int main()
{

int Bime;
int Maliyat;
int HoghoghKol; 
int HoghogPardakhti;

	printf("Barname Mohasebe Haghe Bime Va Maliyat\n");
	printf("Moblaghe Kole Ho\n");
	scanf("%d",&HoghoghKol);

Bime=HoghoghKol*0.07;
Maliyat=HoghoghKol*0.03;
HoghogPardakhti=HoghoghKol- (Bime + Maliyat);

printf("Moblaghe Bime= %d\n",Bime);
printf("Moblaghe Maliyat= %d\n",Maliyat);
printf("Hoghog Pardakhti= %d\n",HoghogPardakhti);


	return 0;
}
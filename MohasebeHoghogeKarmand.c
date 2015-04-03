#include "stdio.h"

int main()
{

int Bime;
int Maliyat;
int HoghoghKol; 
int HoghogePardakhti;
int ShomareKarmandi;
int KoleSaateKar;
int MoblagheHarSaatKar;

	printf("Barname Mohasebe Hoghog bar asase Saate Kar\n");

	printf("Shomare Karmandi ra Vard Kon= \n");
	scanf("%d",&ShomareKarmandi);
	
	printf("Kole Saate Kar ra vard Kon= \n");
	scanf("%d",&KoleSaateKar);

	printf("Moblaghe Har Saate Kar= \n");
	scanf("%d",&MoblagheHarSaatKar);

HoghoghKol=KoleSaateKar*MoblagheHarSaatKar;
Bime=HoghoghKol*0.07;
Maliyat=HoghoghKol*0.03;
HoghogePardakhti=HoghoghKol- (Bime + Maliyat);

printf("\nShomare Karmandi= %d\n",ShomareKarmandi);
printf("Hoghogh Kol= %d\n",HoghoghKol);
printf("Moblaghe Bime= %d\n",Bime);
printf("Moblaghe Maliyat= %d\n",Maliyat);
printf("Hoghog Pardakhti= %d\n",HoghogePardakhti);


	return 0;
}
#include "stdio.h"
int main()
{
	int Length,width;
	int MohitMostatil;
	int MasahatMostatil;
	
    int MohitDaiere;
    int MasahatDaire;
	int p=3.14;
	int r;

	int MohitMosallas,MasahatMosallas,Ghaede,Ertefa,Zel;

	int HajmeKore,MasahatKore,ShoaKore;

	printf("Enter Tool & Arz :\n");
	scanf("%d %d",&Length,&width); // why 3 ta adad migire??? ya migereft
	MohitMostatil=(Length+width) * 2;
	MasahatMostatil=Length*width;
	printf("MohitMostatil = %d\n",MohitMostatil );
	printf("MasahatMostatil = %d \n",MasahatMostatil);

	printf("\nEnter Showa Daire :\n");
	scanf("%d",&r);
	MohitDaiere=2*p*r; 
	printf("MohitDaiere = %d \n",MohitDaiere);
	MasahatDaire=p*r*r;
	printf("MasahatDaire = %d \n",MasahatDaire);

	printf("\nEnter Ghaede & Ertefa & Zel:\n");
	scanf("%d %d %d",&Ghaede,&Ertefa,&Zel);
	MohitMosallas=3*Zel;
	MasahatMosallas=(Ghaede*Ertefa)/2;
	printf("MohitMosallas = %d \n",MohitMosallas);
	printf("MasahatMosallas = %d \n",MasahatMosallas);

	printf("\nEnter Shoa kore :\n");
	scanf("%d",&ShoaKore);
	HajmeKore=(4/3*p)*r*r*r;
	MasahatKore=4*p*r*r;
	printf("HajmeKore=%d\n",HajmeKore);
	printf("ShoaKore=%d\n",ShoaKore);
		
return 0;
}
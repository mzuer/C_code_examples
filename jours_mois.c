#include <stdio.h>

int main(void)
{
	char mois;
	int nb_jours ;

	printf("entre un mois >");
	scanf("%c",&mois;)
	
	switch(mois) {
	case janvier,mars,mai,juillet,aout,octobre,decembre:
	nb_jours=31;
	break;

	case avril,juin,septembre,novembre:
	nb_jours=30;	
	break;

	case fevrier:
	nb_jours=28;
	break;

	default:
	printf("nom de mois pas valide");

	}

printf("\n le mois %c comporte %d jours",mois,nb_jours);

return 0;
}

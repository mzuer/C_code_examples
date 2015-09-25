/*
 * Boucle de comptage avec while
 *** Salaire horaire de 2 employés ***
 */

#include <stdio.h>
#define NB_EMP 2

int main(void){

	int compteur;
	int heures,salaire,total;

	total=0;
	compteur=0;

	while(compteur<NB_EMP){
        printf("heures: ");
        scanf("%d",&heures);
        printf("\nsalaire horaire: ");
        scanf("%d",&salaire);
        total+=heures*salaire;
        compteur++;
	}

printf("le total est %d\n",total);

return 0;
}





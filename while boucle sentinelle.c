/*
 * Boucle avec sentinelle :
 on ne connait pas le nombre de répétitions à l'avance, exécuter la boucle
 jusqu'à rencontrer une valeur particulière (sentinelle)

 *** Somme d'un ensemble d'entiers non négatifs ***
 */

#include <stdio.h>
#define SENTINELLE -1

int main (void)
{
	int total=0;
    int nombre;

	printf("nombre (-1 pour terminer) : ");
	scanf("%d",&nombre);

	while(nombre!=SENTINELLE)
	{
	total+=nombre;
	printf("nombre (-1 pour terminer) : ");
	scanf("%d", &nombre);
    }

    printf("\nLa somme de ces nombres vaut : %d",total);

return 0;
}

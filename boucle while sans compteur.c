/*
 * Boucle while sans compteur
 *** Demander à l'utilisateur un nombre strictement positif***
 */

#include <stdio.h>

int main(void)
{
	int nombre;

	printf("entre un nombre positif >");
	scanf("%d",&nombre);

	while(nombre<=0)
	{
	printf("Entree invalide ! Nombre >");
	scanf("%d",&nombre);
	}

return 0;
}

/*
 * Calcul de la factorielle avec une boucle for
 */

#include <stdio.h>

int main (void)
{
	int nombre, i, produit;

	printf("nombre: ");
	scanf("%d",&nombre);

	produit=1;

	for(i=2; i<nombre+1;i++)	{
        produit=produit*i;
	}
	printf("\n\nle résultat est %d\n",produit);

	produit=1;
	for(i=1; i<=nombre;i++)	{
        produit=produit*i;
	}
	printf("\n\nle résultat est %d\n",produit);

	produit=1;
	for(i=nombre; i>0;--i)	{
        produit=produit*i;
	}
	printf("\n\nle résultat est %d\n",produit);

	produit=1;
	for(i=nombre; i>1;i--)	{
        produit=produit*i;
	}
	printf("\n\nle résultat est %d\n",produit);



return 0;
}


/*on peut mettre plusieurs instructions lors de l'initialisation et de la mise à jour :

for(initialisation 1,..., initialisation n; test ; mise à jour 1,..., mise à jour n) {corps} */

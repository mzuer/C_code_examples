#include <stdio.h>
#include <stdlib.h>
#include "tableaux.h"

//définir les variables globales
int COMPARAISON=0;
int ECHANGE=0;

void echange(int *x, int *y) {
	int t=*x;
	*x=*y;
	*y=t;
	ECHANGE++;
}
void imprimeTableau(int tab[], int n) {
	int i;
	printf("{");
	for (i=0; i<n; i++) {
		printf(" %d", tab[i]);
	}
	printf(" }\n");
}

void copieTableau(int tab[], int tab2[], int n) {
	int i;
	for (i=0; i<n; i++) {
		tab2[i] = tab[i];
	}
}

//FONCTIONS TRI PAR SELECTION
void tri_sel(int tab[], int n)
{
	int i, j, min, min_i;

	for (i = 0; i < n - 1; i++) {
		/* Recherche valeur minimale dans [i,n) */
		min_i = i;
		min = tab[i];
		for (j = i + 1; j < n; j++) {
			COMPARAISON++;
			if (tab[j] < min) {
				min_i = j;
				min = tab[j];
			}
		}
		/* Échange si la valeur minimale n'est pas à l'index i */
		COMPARAISON++;
		if (min_i != i) {
			echange(&tab[i], &tab[min_i]);
		}
	}
}

//FONCTIONS TRI PAR ECHANGE
void tri_ech(int tab[], int n)
{
	int i, j;

	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {

			COMPARAISON++;

			if (tab[j] < tab[i]) {
				echange(&tab[i], &tab[j]);
			}
		}
	}
}

//FONCTIONS TRI PAR BULLE
void tri_bulle(int tab[], int n)
{
	int i, j;

	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--) {

		COMPARAISON++;

			if (tab[j] < tab[j-1]) {
				echange(&tab[j], &tab[j-1]);
			}
		}
	}
}

//FONCTIONS TRI PAR INSERTION
int recherche_dich(int tab[], int n, int val)
{
	int inf, sup, milieu;

	inf = 0;
	sup = n - 1;

	while (inf <= sup) {
		milieu = (inf + sup) / 2;

		if (tab[milieu] == val) {
			return milieu;	/* Trouvé */
			COMPARAISON++;
		} else if (tab[milieu] > val) {
			sup = milieu - 1;
			COMPARAISON+=2;
		} else {/* tab[milieu] < val */
			inf = milieu + 1;
			COMPARAISON+=2;
		}
	};
	return inf;	/* Pas trouvé */
}
void insertion(int tab[], int n, int val)
{
	int pos, i;

	pos = recherche_dich(tab, n, val);
	/* Décale à droite les éléments supérieurs (écrase tab[n]) */
	for (i = n; i > pos; i--) {
		tab[i] = tab[i-1];
		ECHANGE++;
	}
	tab[pos] = val;
}

void tri_insert(int tab[], int n)
{
	int i;

	for (i = 1; i < n; i++) {
		/* Ajoute tab[i] dans la partie triée [0,i) */
		insertion(tab, i, tab[i]);
	}
}

//FONCTIONS TRI RAPIDE
int partition(int tab[], int inf, int sup)
{
	int pivot, g, d;

	pivot = tab[inf];
	g = inf + 1;
	d = sup;
	while (g <= d) {
			COMPARAISON++;
        if (tab[g] <= pivot) {
            g++;
		} else {
			echange(&tab[g], &tab[d]);
			d--;
		}
	}
	echange(&tab[inf], &tab[d]);
	return d;
}
void tri_rapide_rec(int tab[], int inf, int sup)
{
	int p;
	COMPARAISON++;
	if (inf < sup) {
		p = partition(tab, inf, sup);
		tri_rapide_rec(tab, inf, p - 1);
		tri_rapide_rec(tab, p + 1, sup);
	}
}
void tri_rapide(int tab[], int n)
{
	tri_rapide_rec(tab, 0, n - 1);
}


int main(void)
{

	int n=30;
	int temp[n];

/*NB : Mettre à zéro les compteurs avant d'afficher chaque tableau */

///////////TRI PAR SELECTION
printf("Tri par sélection\n\n");
//tableau1
COMPARAISON=0;
ECHANGE=0;
printf("Tableau 1 original\n");
imprimeTableau(tableau,30);
copieTableau(tableau,temp,n);

tri_sel(temp,30);
printf("\nTri par sélection : %d comparaisons et %d échanges\n",COMPARAISON,ECHANGE);
imprimeTableau(temp,30);

//tableau2
COMPARAISON=0;
ECHANGE=0;
printf("\nTableau 2 original\n");
imprimeTableau(tableau2,30);
copieTableau(tableau2,temp,n);

tri_sel(temp,30);
printf("\nTri par sélection : %d comparaisons et %d échanges\n",COMPARAISON,ECHANGE);
imprimeTableau(temp,30);

//tableau3
COMPARAISON=0;
ECHANGE=0;
printf("\nTableau 3 original\n");
imprimeTableau(tableau3,30);
copieTableau(tableau3,temp,n);

tri_sel(temp,30);
printf("\nTri par sélection : %d comparaisons et %d échanges\n",COMPARAISON,ECHANGE);
imprimeTableau(temp,30);


///////////TRI PAR ECHANGE
printf("\nTri par échange\n\n");

//tableau1
COMPARAISON=0;
ECHANGE=0;
printf("Tableau 1 original\n");
imprimeTableau(tableau,30);
copieTableau(tableau,temp,n);

tri_ech(temp,30);
printf("\nTri par échange : %d comparaisons et %d échanges\n",COMPARAISON,ECHANGE);
imprimeTableau(tableau,30);

//tableau2
COMPARAISON=0;
ECHANGE=0;
printf("\nTableau 2 original\n");
imprimeTableau(tableau2,30);
copieTableau(tableau2,temp,n);

tri_ech(temp,30);
printf("\nTri par échange : %d comparaisons et %d échanges\n",COMPARAISON,ECHANGE);
imprimeTableau(temp,30);

//tableau3
COMPARAISON=0;
ECHANGE=0;
printf("\nTableau 3 original\n");
imprimeTableau(tableau3,30);
copieTableau(tableau3,temp,n);

tri_ech(temp,30);
printf("\nTri par échange : %d comparaisons et %d échanges\n",COMPARAISON,ECHANGE);
imprimeTableau(temp,30);


///////////TRI PAR BULLE

printf("\nTri par bulle\n\n");

//tableau1
COMPARAISON=0;
ECHANGE=0;
printf("Tableau 1 original\n");
imprimeTableau(tableau,30);
copieTableau(tableau,temp,n);

tri_bulle(temp,30);
printf("\nTri par bulle : %d comparaisons et %d échanges\n",COMPARAISON,ECHANGE);
imprimeTableau(tableau,30);

//tableau2
COMPARAISON=0;
ECHANGE=0;
printf("\nTableau 2 original\n");
imprimeTableau(tableau2,30);
copieTableau(tableau2,temp,n);

tri_bulle(temp,30);
printf("\nTri par bulle : %d comparaisons et %d échanges\n",COMPARAISON,ECHANGE);
imprimeTableau(temp,30);

//tableau3
COMPARAISON=0;
ECHANGE=0;
printf("\nTableau 3 original\n");
imprimeTableau(tableau3,30);
copieTableau(tableau3,temp,n);

tri_bulle(temp,30);
printf("\nTri par bulle : %d comparaisons et %d échanges\n",COMPARAISON,ECHANGE);
imprimeTableau(temp,30);

///////////TRI PAR INSERTION

printf("\nTri par insertion\n\n");

//tableau1
COMPARAISON=0;
ECHANGE=0;
printf("Tableau 1 original\n");
imprimeTableau(tableau,30);
copieTableau(tableau,temp,n);

tri_insert(temp,30);
printf("\nTri par insertion : %d comparaisons et %d échanges\n",COMPARAISON,ECHANGE);
imprimeTableau(tableau,30);

//tableau2
COMPARAISON=0;
ECHANGE=0;
printf("\nTableau 2 original\n");
imprimeTableau(tableau2,30);
copieTableau(tableau2,temp,n);

tri_insert(temp,30);
printf("\nTri par insertion : %d comparaisons et %d échanges\n",COMPARAISON,ECHANGE);
imprimeTableau(temp,30);

//tableau3
COMPARAISON=0;
ECHANGE=0;
printf("\nTableau 3 original\n");
imprimeTableau(tableau3,30);
copieTableau(tableau3,temp,n);

tri_insert(temp,30);
printf("\nTri par insertion : %d comparaisons et %d échanges\n",COMPARAISON,ECHANGE);
imprimeTableau(temp,30);

///////////TRI RAPIDE

printf("\nTri rapide\n\n");

//tableau1
COMPARAISON=0;
ECHANGE=0;
printf("Tableau 1 original\n");
imprimeTableau(tableau,30);
copieTableau(tableau,temp,n);

tri_rapide(temp,30);
printf("\nTri rapide : %d comparaisons et %d échanges\n",COMPARAISON,ECHANGE);
imprimeTableau(temp,30);

//tableau2
COMPARAISON=0;
ECHANGE=0;
printf("\nTableau 2 original\n");
imprimeTableau(tableau2,30);
copieTableau(tableau2,temp,n);

tri_rapide(temp,30);
printf("\nTri rapide : %d comparaisons et %d échanges\n",COMPARAISON,ECHANGE);
imprimeTableau(temp,30);

//tableau3
COMPARAISON=0;
ECHANGE=0;
printf("\nTableau 3 original\n");
imprimeTableau(tableau3,30);
copieTableau(tableau3,temp,n);

tri_rapide(temp,30);
printf("\nTri rapide : %d comparaisons et %d échanges\n",COMPARAISON,ECHANGE);
imprimeTableau(temp,30);


	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "tableaux.h"



void echange(int *x, int *y) {
	int t=*x;
	*x=*y;
	*y=t;
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
			if (tab[j] < min) {
				min_i = j;
				min = tab[j];
			}
		}
		/* Échange si la valeur minimale n'est pas à l'index i */
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
		} else if (tab[milieu] > val) {
			sup = milieu - 1;
		} else {/* tab[milieu] < val */
			inf = milieu + 1;
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



int main(int argc, char **argv)
{
char i;
char *tableau5[10];

printf("%s",tableau4[1]);

i=strupr(tableau4[1]);

printf("%s",i);

return 0;
}

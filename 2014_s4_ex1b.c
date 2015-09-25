#include <stdio.h>
#include <stdlib.h>
#include "tableaux.h"

// variables globales car on veut mettre les compteurs a zero mais utiliser tjs les memes compteurs
int echanges=0;
int comparaisons=0;

// suite
void echange(int *x, int *y) {

    /* AJOUT */
    echanges++;
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

// FONCTION TRI PAR SELECTION
void tri_sel(int tab[], int n)
{
	int i, j, min, min_i;

	for (i = 0; i < n - 1; i++) {
		/* Recherche valeur minimale dans [i,n) */
		min_i = i;
		min = tab[i];
		for (j = i + 1; j < n; j++) {
		    /* AJOUT */
		    comparaisons++;
			if (tab[j] < min) {
				min_i = j;
				min = tab[j];
			}
		}
		/* Échange si la valeur minimale n'est pas à l'index i */
            /* AJOUT */
		    comparaisons++;
		if (min_i != i) {
			echange(&tab[i], &tab[min_i]);
		}
	}
}


// FONCTION TRI PAR ECHANGE
void tri_ech(int tab[], int n)
{
	int i, j;

	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
		    /* AJOUT */
		    comparaisons++;
			if (tab[j] < tab[i]) {
				echange(&tab[i], &tab[j]);
			}
		}
	}
}

// FONCTION TRI PAR BULLE
void tri_bulle(int tab[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--) {
		    /* AJOUT */
		    comparaisons++;
			if (tab[j] < tab[j-1]) {
				echange(&tab[j], &tab[j-1]);
			}
		}
	}
}

// FONCTION TRI PAR INSERTION
int recherche_dich(int tab[], int n, int val)
{
	int inf, sup, milieu;

	inf = 0;
	sup = n - 1;

	while (inf <= sup) {
		milieu = (inf + sup) / 2;
		if (tab[milieu] == val) {
        /* AJOUT */
        comparaisons++;
			return milieu;	/* Trouvé */
		} else if (tab[milieu] > val) {
		    /* AJOUT */
		    comparaisons+=2;
			sup = milieu - 1;
		} else {/* tab[milieu] < val */
            /* AJOUT */
		    comparaisons+=2;
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
        /* AJOUT */
	    echanges++;
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

// FONCTION TRI RAPIDE
int partition(int tab[], int inf, int sup)
{
	int pivot, g, d;
	pivot = tab[inf];
	g = inf + 1;
	d = sup;
	while (g <= d) {
	    /* AJOUT */
        comparaisons++;
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
	/* AJOUT */
    comparaisons++;
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

// FONCTION PRINCIPALE
int main(int argc, char **argv)
{

int n = 30;
int temp[n];

// TRI PAR SELECTION - tableau 1, 2 et 3

// mise à zéro des compteurs et du tableau temporaire
comparaisons=0;
echanges=0;
copieTableau(tableau, temp, n);

tri_sel(temp, n);
printf("Tableau original : \n");
imprimeTableau(tableau, n);
printf("========");
printf("\nTri par selection Tab1 : %d comparaisons et %d echanges\n", comparaisons, echanges);

// mise à zéro des compteurs et du tableau temporaire
comparaisons=0;
echanges=0;
copieTableau(tableau2, temp, n);

tri_sel(temp, n);
printf("\nTri par selection Tab2 : %d comparaisons et %d echanges\n", comparaisons, echanges);

// mise à zéro des compteurs et du tableau temporaire
comparaisons=0;
echanges=0;
copieTableau(tableau3, temp, n);

tri_sel(temp, n);
printf("\nTri par selection Tab3 : %d comparaisons et %d echanges\n", comparaisons, echanges);

printf("\n\n");

// TRI PAR ECHANGE - tableau 1, 2 et 3

// mise à zéro des compteurs et du tableau temporaire
comparaisons = 0;
echanges = 0;
copieTableau(tableau, temp, n);

tri_ech(temp,n);
printf("Tableau original : \n");
imprimeTableau(tableau,n);
printf("========");
printf("\nTri par echanges Tab1: %d comparaisons et %d echanges\n", comparaisons, echanges);

// mise à zéro des compteurs et du tableau temporaire
comparaisons=0;
echanges=0;
copieTableau(tableau2, temp, n);

tri_ech(temp, n);
printf("\nTri par echanges Tab2 : %d comparaisons et %d echanges\n", comparaisons, echanges);

// mise à zéro des compteurs et du tableau temporaire
comparaisons=0;
echanges=0;
copieTableau(tableau3, temp, n);

tri_ech(temp, n);
printf("\nTri par echanges Tab3 : %d comparaisons et %d echanges\n", comparaisons, echanges);

printf("\n\n");

// TRI A BULLE - tableau 1, 2 et 3

// mise à zéro des compteurs et du tableau temporaire
comparaisons = 0;
echanges = 0;
copieTableau(tableau, temp, n);

tri_bulle(temp,n);
printf("Tableau original : \n");
imprimeTableau(tableau,n);
printf("========");
printf("\nTri par bulles Tab1: %d comparaisons et %d echanges\n", comparaisons, echanges);

// mise à zéro des compteurs et du tableau temporaire
comparaisons=0;
echanges=0;
copieTableau(tableau2, temp, n);

tri_bulle(temp, n);
printf("\nTri par bulles Tab2 : %d comparaisons et %d echanges\n", comparaisons, echanges);

// mise à zéro des compteurs et du tableau temporaire
comparaisons=0;
echanges=0;
copieTableau(tableau3, temp, n);

tri_bulle(temp, n);
printf("\nTri par bulles Tab3 : %d comparaisons et %d echanges\n", comparaisons, echanges);

printf("\n\n");

// TRI PAR INSERTION - tableau 1, 2 et 3

// mise à zéro des compteurs et du tableau temporaire
comparaisons = 0;
echanges = 0;
copieTableau(tableau, temp, n);

tri_insert(temp,n);
printf("Tableau original : \n");
imprimeTableau(tableau,n);
printf("========");
printf("\nTri par insertion Tab1: %d comparaisons et %d echanges\n", comparaisons, echanges);

// mise à zéro des compteurs et du tableau temporaire
comparaisons=0;
echanges=0;
copieTableau(tableau2, temp, n);

tri_insert(temp, n);
printf("\nTri par insertion Tab2 : %d comparaisons et %d echanges\n", comparaisons, echanges);

// mise à zéro des compteurs et du tableau temporaire
comparaisons=0;
echanges=0;
copieTableau(tableau3, temp, n);

tri_insert(temp, n);
printf("\nTri par insertion Tab3 : %d comparaisons et %d echanges\n", comparaisons, echanges);

printf("\n\n");

// TRI RAPIDE - tableau 1, 2 et 3

// mise à zéro des compteurs et du tableau temporaire
comparaisons = 0;
echanges = 0;
copieTableau(tableau, temp, n);

tri_rapide(temp,n);
printf("Tableau original : \n");
imprimeTableau(tableau,n);
printf("========");
printf("\nTri rapide Tab1 : %d comparaisons et %d echanges\n", comparaisons, echanges);

// mise à zéro des compteurs et du tableau temporaire
comparaisons=0;
echanges=0;
copieTableau(tableau2, temp, n);

tri_rapide(temp, n);
printf("\nTri rapide Tab2 : %d comparaisons et %d echanges\n", comparaisons, echanges);

// mise à zéro des compteurs et du tableau temporaire
comparaisons=0;
echanges=0;
copieTableau(tableau3, temp, n);

tri_rapide(temp, n);
printf("\nTri rapide Tab3 : %d comparaisons et %d echanges\n", comparaisons, echanges);

printf("\n\n");

	return 0;
}

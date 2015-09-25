/*
 * Exercice 2 : tri par ordre alphabétique d'un tableau de chaines
 */

#include<string.h>
/*
inclut strcmp :
strcmp(const char *s1, const char *s2);
0 si s1=s2, - si s1 lexicograph. inf à s2 ; + si s1 lexicograph. sup à s2
*/

#include <stdio.h>
#include <stdlib.h>
#include "tableaux.h"


int COMPARAISON;
int ECHANGE;


void echange(char *x, char *y) {


    ECHANGE++;

    //Recupere l'adresse du string et le sauvegarde
	int t=*x;
	*x=*y;
	*y=t;
}
void imprimeTableau(char* tab[], int n) {
	int i;
	printf("{");
	for (i=0; i<n; i++) {
		printf(" %s", tab[i]);
	}
	printf(" }\n");
}

void copieTableau(char* tab[], char* tab2[], int n) {
	int i;
	for (i=0; i<n; i++) {
		tab2[i] = tab[i];
	}
}

//FONCTIONS TRI PAR SELECTION
void tri_sel(char* tab[], int n)
{
	int i, j, min_i;

    //Le minimum est un string
	char* min;

	for (i = 0; i < n - 1; i++) {
		/* Recherche valeur minimale dans [i,n) */
		min_i = i;
		min = tab[i];
		for (j = i + 1; j < n; j++) {

		    COMPARAISON++;
		    //Compare les deux strings ( tiens compte des majuscules en premier )
			if (strcmp(tab[j],min)<0) {
				min_i = j;
				min = tab[j];
			}
		}

        COMPARAISON++;
		/* Échange si la valeur minimale n'est pas à l'index i */
		if (min_i != i) {
			echange(&tab[i], &tab[min_i]);
		}
	}
}


//FONCTIONS TRI PAR ECHANGE
void tri_ech(char* tab[], int n)
{
	int i, j;

	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {

		    COMPARAISON++;
			if (strcmp(tab[j],tab[i])<0) {
				echange(&tab[i], &tab[j]);
			}
		}
	}
}

//FONCTIONS TRI PAR BULLE
void tri_bulle(char* tab[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--) {

		    COMPARAISON++;
			if (strcmp(tab[j],tab[j-1])<0) {
				echange(&tab[j], &tab[j-1]);
			}
		}
	}
}

//FONCTIONS TRI PAR INSERTION
int recherche_dich(char* tab[], int n, char* val)
{
	int inf, sup, milieu;

	inf = 0;
	sup = n - 1;

	while (inf <= sup) {
		milieu = (inf + sup) / 2;
        if (strcmp(tab[milieu],val) == 0) {

            COMPARAISON++;
			return milieu;	/* Trouvé */
		} else if (strcmp(tab[milieu],val)>0) {

		    COMPARAISON+=2;
			sup = milieu - 1;
		} else {/* tab[milieu] < val */

		    COMPARAISON+=2;
			inf = milieu + 1;
		}
	};
	return inf;	/* Pas trouvé */
}
void insertion(char* tab[], int n, char* val)
{
	int pos, i;

	pos = recherche_dich(tab, n, val);
	/* Décale à droite les éléments supérieurs (écrase tab[n]) */
	for (i = n; i > pos; i--) {

	    ECHANGE++;
		tab[i] = tab[i-1];
	}
	tab[pos] = val;
}

void tri_insert(char* tab[], int n)
{
	int i;

	for (i = 1; i < n; i++) {
		/* Ajoute tab[i] dans la partie triée [0,i) */
		insertion(tab, i, tab[i]);
	}
}

//FONCTIONS TRI RAPIDE
char* partition(int tab[], int inf, int sup)
{
	int g, d;
	//Le pivot est maintenant un string
	char* pivot;
	pivot = tab[inf];
	g = inf + 1;
	d = sup;
	while (g <= d) {

        COMPARAISON++;
		if (strcmp(tab[g],pivot)<0) {
			g++;
		} else {
			echange(&tab[g], &tab[d]);
			d--;
		}
	}
	echange(&tab[inf], &tab[d]);
	return d;
}
void tri_rapide_rec(char* tab[], int inf, int sup)
{
	char* p;
	if (inf < sup) {
		p = partition(tab, inf, sup);
		tri_rapide_rec(tab, inf, p - 1);
		tri_rapide_rec(tab, p + 1, sup);
	}
}
void tri_rapide(char* tab[], int n)
{
	tri_rapide_rec(tab, 0, n - 1);
}



int main(void)
{
int n = 10;
int temp[n];

// TRI PAR SELECTION - tableau 1, 2 et 3

// mise à zéro des compteurs et du tableau temporaire
COMPARAISON=0;
ECHANGE=0;
copieTableau(tableau4, temp, n);

tri_sel(temp, n);
printf("Tableau original : \n");
imprimeTableau(tableau4, n);
printf("Tableau final : \n");
imprimeTableau(temp, n);


printf("========");
printf("\nTri par selection : %d comparaisons et %d échanges\n", COMPARAISON, ECHANGE);

printf("\n\n");
// TRI PAR ECHANGE - tableau 1, 2 et 3

// mise à zéro des compteurs et du tableau temporaire
COMPARAISON = 0;
ECHANGE = 0;
copieTableau(tableau4, temp, n);

tri_ech(temp,n);
printf("Tableau original : \n");
imprimeTableau(tableau4,n);
printf("Tableau final : \n");
imprimeTableau(temp, n);

printf("========");
printf("\nTri par ECHANGE : %d comparaisons et %d échanges\n", COMPARAISON, ECHANGE);

printf("\n\n");
// TRI A BULLE - tableau 1, 2 et 3

// mise à zéro des compteurs et du tableau temporaire
COMPARAISON = 0;
ECHANGE = 0;
copieTableau(tableau4, temp, n);

tri_bulle(temp,n);
printf("Tableau original : \n");
imprimeTableau(tableau4,n);
printf("Tableau final : \n");
imprimeTableau(temp, n);

printf("========");
printf("\nTri par bulles : %d comparaisons et %d échanges\n", COMPARAISON, ECHANGE);

printf("\n\n");

// TRI PAR INSERTION - tableau 1, 2 et 3

// mise à zéro des compteurs et du tableau temporaire
COMPARAISON = 0;
ECHANGE = 0;
copieTableau(tableau4, temp, n);

tri_insert(temp,n);
printf("Tableau original : \n");
imprimeTableau(tableau4,n);
printf("Tableau final : \n");
imprimeTableau(temp, n);

printf("========");
printf("\nTri par insertion : %d comparaisons et %d échanges\n", COMPARAISON, ECHANGE);

printf("\n\n");
// TRI RAPIDE - tableau 1, 2 et 3

// mise à zéro des compteurs et du tableau temporaire
COMPARAISON = 0;
ECHANGE = 0;
copieTableau(tableau4, temp, n);

tri_rapide(temp,n);
printf("Tableau original : \n");
imprimeTableau(tableau4,n);
printf("Tableau final : \n");
imprimeTableau(temp, n);

printf("========");
printf("\nTri rapide : %d comparaisons et %d échanges\n", COMPARAISON, ECHANGE);

printf("\n\n");



	return 0;
}

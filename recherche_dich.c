/*
 * RECHERCHE DICHOTOMIQUE
 *** Tableau tri� en entr�e
 *** Regarder l'�l�ment au milieu du tableau : si = valeur recherch�e -> trouv�
 *** si < � valeur recherch�e -> traiter la 2�me moiti�
 *** si > � valeur recherch�e -> traiter la 1�re moiti�
 */

#include <stdio.h>

int recherche_dich(int tab[],int n, int val);
int recherche_dich_rec(int tab[],int inf, int sup, int val);
int recherche_dich_recursive (int tab[],int n, int val);

int main (void){

    int tableau[]={1,2,3,4,5,6};
    int valeur=4,valeur2=2,i;

    for(i=0;i<6;i++){
        printf("%d",tableau[i]);
    }

    printf("\nLa valeur %d, se trouve en %d-i�me position",valeur,recherche_dich(tableau,6,10)+1);
    printf("\nLa valeur %d, se trouve en %d-i�me position",valeur2,recherche_dich_recursive(tableau,6,valeur2)+1);

return 0;
}
// Recherche dichotomique it�rative
int recherche_dich(int tab[],int n, int val){

    int inf,sup,milieu;

    inf=0;
    sup=n-1;

    while(inf<=sup){

        milieu=(inf+sup)/2;

        if(tab[milieu]==val){       // Trouv� !
            return milieu;
        }
        else if(tab[milieu]>val){
            sup=milieu-1;
        }
        else{    /* tab[milieu]<val */
            inf=milieu+1;
        }
    }
    return inf; // Pas trouv� : position que val devrait occuper (pas dans le tableau)
}
// Recherche dichotomique r�cursive

int recherche_dich_recursive (int tab[],int n, int val){
    return recherche_dich_rec(tab,0,n-1,val);
}

int recherche_dich_rec(int tab[],int inf,int sup, int val){

    int milieu;

    if(inf<=sup){
        milieu=(inf+sup)/2;

        if(tab[milieu]==val){
            return milieu;
        }

        else if(tab[milieu]>val){
            return recherche_dich_rec(tab,inf,milieu-1,val);
        }

        else {       // tab[milieu]<val
            return recherche_dich_rec(tab,milieu+1,sup,val);
        }
    }

    return inf; // Pas trouv�, position que val devrait occuper
}


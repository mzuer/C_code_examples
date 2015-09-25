/*
 * TRI PAR INSERTION
 *** Trouver la position de l'élément non trié par recherche dichotomique
 *** L'insérer en déplaçant les éléments supérieurs
 *** Complexité O(n*log(n)) => log(n) comparaisons pour chaque élément
 */

#include <stdio.h>


void tri_insert (int tab[],int n);
void insertion (int tab[], int n, int val);
int recherche_dich(int tab[],int n, int val);

int main (void){

    int tableau[]={3,5,1,4,2};
    tri_insert(tableau,5);

return 0;
}

void tri_insert (int tab[],int n){

    int i;

    for(i=1;i<n;i++){
        /* Ajouter tab[i] dans la partie triée [0,i) */
        insertion(tab,i,tab[i]);
    }

    for(i=0;i<n;i++){
        printf("%d",tab[i]);    // Afficher le tableau trié
    }

return;
}

void insertion (int tab[], int n, int val){
    int pos,i;

    pos=recherche_dich(tab,n,val);
    /* Décaler à droite les éléments supérieurs à la position d'insertion */
    for(i=n;i>pos;i--){
        tab[i]=tab[i-1];
    }

    tab[pos]=val;

return;
}

int recherche_dich (int tab[],int n, int val){

    int inf,sup,milieu;

    inf=0;
    sup=n-1;

    while(inf<=sup){
        milieu=(inf+sup)/2;
        if(tab[milieu]==val){
            return milieu;      /* Trouvé */
        }
        else if (tab[milieu]>val){
            sup=milieu-1;
        }
        else {                  /* tab[milieu]<val */
            inf=milieu+1;
        }
    }
return inf;
}

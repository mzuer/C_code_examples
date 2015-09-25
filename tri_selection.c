/*
 * TRI PAR SELECTION
 *** Boucle extérieure parcourt le tableau 1x, pointe sur l'élément dans lequel on
 *** va stocker la + petite valeur se trouvant dans la fin du tableau
 *** Boucle intérieure parcourt le tableau plusieurs fois pour trouver la plus petite
 *** valeur de la fin de tableau
 *** En entrée : tableau non trié
 *** Complexité : O(n*(n-1)/2) => O(n^2)
 */

#include <stdio.h>

void tri_sel(int tab[],int n);
void echange (int *x, int *y);

int main (void){

    int tableau[]={4,3,5,8,1,2,7,0,9,6};

    tri_sel(tableau,10);        //FAUX D'ENVOYER (tab[],10)

return 0;
}

void tri_sel(int tab[],int n){

    int i,j,min,min_i;

    for(i=0;i<n-1;i++){
        /* Recherche valeur minimale dans [i,n) */
        min_i=i;
        min=tab[i];

        for(j=i+1;j<n;j++){

            if(tab[j]<min){
                min_i=j;
                min=tab[j];
            }
        }

        /* Echange si la valeur minimale n'est pas l'index i */
        if(min_i!=i){
            echange(&tab[i],&tab[min_i]);
        }
    }

    for(i=0;i<n;i++){
        printf("%d",tab[i]);
    }

return;
}

void echange (int *x, int *y){

    int tmp;

    tmp=*x;
    *x=*y;
    *y=tmp;

return;
}


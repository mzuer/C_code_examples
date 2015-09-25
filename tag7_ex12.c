/*
 * Lire des entiers et les enregistrer dans un tableau
 * Quitter le tableau quand rempli ou quand 0
 * Trouver la + grande et la plus petite valeur
 */

#include <stdio.h>

#define DIM 5


int main(void){


    int tab[DIM],i=0,taille=0;

    printf("Donnez un entier par ligne (5)\n");


     do{
        scanf("%d",&tab[i]);
        i++;
    }
    while (i<DIM);

printf("max : %d, min %d",max(tab),min(tab));

return 0;
}

int max (int tableau[]){

    int min=-5000,i;

    for(i=0;i<DIM;i++){
            if(tableau[i]>min){
            min=tableau[i];
        }
    }

    return min;
}

int min (int tableau[]){

    int max=5000,i;

    for(i=0;i<DIM;i++){
            if(tableau[i]<max){
            max=tableau[i];
        }
    }

    return max;
}

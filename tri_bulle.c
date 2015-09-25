/*
 * TRI A BULLES (TRI PAR PROPAGATION)
 *** Tableau non trié en entrée
 *** Parcourir le tableau depuis le fond et faire remonter les éléments inférieurs
 *** depuis le fond jusqu'à ce qu'il se trouve derrière un élément plus "léger"
 */

#include <stdio.h>

void tri_bulle(int tab[],int n);
void echange (int *x, int *y);


int main(void){

    int tableau[]={4,3,5,8,1,2,7,0,9,6};

    tri_bulle(tableau,10);        //FAUX D'ENVOYER (tab[],10)

return 0;
}

void tri_bulle(int tab[],int n){

    int i,j;

    for(i=0;i<n-1;i++){                          //Boucle externe de gauche à droite
        for(j=n-1;j>i;j--){                      //Boucle imbriquéede droite à gauche
            if(tab[j]<tab[j-1]){
                echange(&tab[j],&tab[j-1]);    //Dès que la case de droite est + petite que celle à gauche -> inverser
            }
        }
    }
    for(i=0;i<n;i++){           //Afficher le tableau
    printf("%d",tab[i]);
    }

return ;
}

void echange (int *x, int *y){

    int tmp;

    tmp=*x;
    *x=*y;
    *y=tmp;

return ;
}

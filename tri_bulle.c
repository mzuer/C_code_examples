/*
 * TRI A BULLES (TRI PAR PROPAGATION)
 *** Tableau non tri� en entr�e
 *** Parcourir le tableau depuis le fond et faire remonter les �l�ments inf�rieurs
 *** depuis le fond jusqu'� ce qu'il se trouve derri�re un �l�ment plus "l�ger"
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

    for(i=0;i<n-1;i++){                          //Boucle externe de gauche � droite
        for(j=n-1;j>i;j--){                      //Boucle imbriqu�ede droite � gauche
            if(tab[j]<tab[j-1]){
                echange(&tab[j],&tab[j-1]);    //D�s que la case de droite est + petite que celle � gauche -> inverser
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

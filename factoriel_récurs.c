/*
 * Calcul de la factorielle avec fonction r�cursive
 */

#include<stdio.h>

int main(void){

    int nbre,resultat;

    printf("Calculer la factorielle de : ");
    scanf("%d",&nbre);
    resultat=fac_rec
    (nbre);

    printf("\nLa factorielle de %d vaut %d",nbre,resultat);


return 0;
}


int fac_rec(int n){

//D�finition du cas simple :
    if(n==1)
        return 1;
    else
//Appel r�cursif (toujours avec un
        return n*fac_rec(n-1);

}
/*

// ############# Factorielle avec boucle for #############
int fac_iter(int n){

    int produit;

    produit=1;

    for(;n>1;n--){

        produit*=n;
    }

    return produit;

}
*/


/*
 * Rechercher le nombre d'occurences dans un tableau
 */

#include <stdio.h>
#define TAILLE 100

int recherche_nbre(int t[],int taille, int n);

int main (void){

    int tab[TAILLE];
    int i=0, taille=0,nbre,nbre_cherche;

    printf("Remplissez un tableau, -1 pour terminer\n");

    do{
        scanf("%d",&nbre);
        tab[i]=nbre;
        taille++;
        i++;
    }
    while(nbre!=-1 && taille<TAILLE);

    taille--;

    for(i=0;i<taille;i++){
        printf("%d   ",tab[i]);
    }

    printf("\nTableau rempli de taille %d",taille);


    printf("\nTrouver le nombre de fois que le chiffre N apparait. N =");
    scanf("%d",&nbre_cherche);
    printf("\%d apparait %d fois dans le tableau",nbre_cherche,recherche_nbre(tab,taille,nbre_cherche));

return 0;
}

int recherche_nbre(int t[],int taille,int n){

    int compteur=0,i;

    for(i=0;i<taille;i++){
        if(t[i]==n){
            compteur++;
        }
    }

    return compteur;

}


/*
 * RECHERCHE SEQUENTIELLE
 *** renvoie l'index de l'élément ou -1 si pas trouvé
 */

#include <stdio.h>

int recherche_max_seq(int tab[],int n);
int recherche_min_seq(int tab[],int n);
int recherche_seq(int tab[],int n,int val);
int recherche_seq_trie(int tab[],int n,int val);

int main (void){

    int tableau[]={2,1,3,5,4};
    int tableau2[]={1,2,3,4,5};
    int i;
    int valeur=3;
    int valeur2=10;

    for(i=0;i<5;i++){
        printf("%d",tableau[i]);
    }

    printf("\nLa valeur max est en %d-ième position",recherche_max_seq(tableau,5)+1);
    printf("\nLa valeur min est en %d-ième position",recherche_min_seq(tableau,5)+1);
//Chercher 3 dans le tableau
    printf("\nLa valeur %d se trouve-t-elle dans le tableau ?",valeur);

    if(recherche_seq(tableau,5,valeur)==-1){
        printf("\nLa valeur n'est pas dans le tableau");
    }
    else{
        printf("\nLa valeur recherchée est en %d-ième position",recherche_seq(tableau,5,valeur)+1);
    }
//Chercher 10 dans le tableau
        printf("\nLa valeur %d se trouve-t-elle dans le tableau ?",valeur2);

    if(recherche_seq(tableau,5,valeur2)==-1){
        printf("\nLa valeur n'est pas dans le tableau");
    }
    else{
        printf("\nLa valeur recherchée est en %d-ième position",recherche_seq(tableau,5,valeur2)+1);
    }
//Chercher 3 dans le tableau trié
    printf("\nLa valeur %d se trouve-t-elle dans le tableau ?",valeur);

    if(recherche_seq_trie(tableau,5,valeur)==-1){
        printf("\nLa valeur n'est pas dans le tableau");
    }
    else{
        printf("\nLa valeur recherchée est en %d-ième position",recherche_seq_trie(tableau,5,valeur)+1);
    }
return 0;
}

// Variante : trouver la valeur max du tableau
int recherche_max_seq(int tab[],int n){

int i, max=tab[0],max_i=0;

for(i=0;i<n;i++){
    if(tab[i]>max){
        max_i=i;
        max=tab[i];
    }
}

return max_i;

}
// Variante : trouver la valeur min du tableau
int recherche_min_seq(int tab[],int n){

int i, min=tab[0],min_i=0;

for(i=0;i<n;i++){
    if(tab[i]<min){
        min_i=i;
        min=tab[i];
    }
}
return min_i;
}

int recherche_seq(int tab[],int n,int val){

    int i;

    for(i=0;i<n;i++){
        if(tab[i]==val){    // Trouvé !
            return i;
        }
    }
    return -1; //Pas trouvé...
}

int recherche_seq_trie(int tab[],int n,int val){

    int i;

    for(i=0;i<n && tab[i]<=val;i++){
        if(tab[i]==val){    // Trouvé !
            return i;
        }
    }
    return -1; //Pas trouvé...
}

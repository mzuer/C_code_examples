/*
 * Accès séquentiel à un tableau
 *** Somme de tous les éléments d'un tableau
 */

 #include <stdio.h>
 #define TAILLE 5

 int main (void){

    int tab[TAILLE];
    int i,total=0;

    printf("Entrez 5 nombres à calculer la somme \n");

    for(i=0;i<TAILLE;i++){
        printf("%d-ième nombre ",i+1);
        scanf("%d",&tab[i]);
    }

    printf("\nLe tableau est donc \n");
    for(i=0;i<TAILLE;i++){
        printf("%d",tab[i]);
    }


    for(i=0;i<TAILLE;i++){
        total+=tab[i];

        // Attention ! Il ne faut pas oublier d'initialiser total à zéro !!!
    }

    printf("\nLa somme des 5 nombres vaut : %d",total);

 }

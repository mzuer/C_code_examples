/*
 * Acc�s s�quentiel � un tableau
 *** Somme de tous les �l�ments d'un tableau
 */

 #include <stdio.h>
 #define TAILLE 5

 int main (void){

    int tab[TAILLE];
    int i,total=0;

    printf("Entrez 5 nombres � calculer la somme \n");

    for(i=0;i<TAILLE;i++){
        printf("%d-i�me nombre ",i+1);
        scanf("%d",&tab[i]);
    }

    printf("\nLe tableau est donc \n");
    for(i=0;i<TAILLE;i++){
        printf("%d",tab[i]);
    }


    for(i=0;i<TAILLE;i++){
        total+=tab[i];

        // Attention ! Il ne faut pas oublier d'initialiser total � z�ro !!!
    }

    printf("\nLa somme des 5 nombres vaut : %d",total);

 }

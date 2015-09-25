/*
 * 7.18 : Matrice carrée unitaire et variante (inverese 0 et 1)
 */


#include <stdio.h>

int main(void){

    int tab[50][50];
    int taille,i,j;

    puts("Taille de la matrice");
    scanf("%d",&taille);

    printf("\n");

    for(i=0;i<taille;i++){
        for(j=0;j<taille;j++){
            printf("%d",(i==j)?1:0);
        }
        printf("\n");
    }
    printf("\n");
    printf("*** Inverse ***");
    printf("\n");
    printf("\n");

    for(i=0;i<taille;i++){
        for(j=0;j<taille;j++){
            printf("%d",(i==j)?0:1);
        }
        printf("\n");
    }

return 0;
}

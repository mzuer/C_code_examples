/*
 * 7.17 : Mise à zéro d'une diagonale d'une matrice
 */

#include <stdio.h>


int main(void){

    int tab[100][100];
    int M,N,i,j;

    puts("Matrice de taille MxN, rentrez M puis N");
    scanf("%d %d",&M,&N);

    printf("Remplir la matrice, %d chiffres\n",M*N);
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            scanf("%d",&tab[i][j]);
        }
    }

    puts("Vous avez rempli la matrice suivante");
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            printf("%d   ",tab[i][j]);
        }
        printf("\n");
    }

    puts("Mise à zéro de la diagonale");

    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            if(i==j){
                tab[i][j]=0;
            }
        }
    }

    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            printf("%d   ",tab[i][j]);
        }
        printf("\n");
    }
return 0;
}

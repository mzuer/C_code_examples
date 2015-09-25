/*
 * 7.19 : Transposition d'un tableau
 */

#include <string.h>

int main (void){

    int tab[50][50];
    int dim1,dim2,i,j;

    printf("Taille de ixj : ");
    scanf("%d %d",&dim1,&dim2);
    printf("Saisir un tableau de taille %d \n",dim1*dim2);

    for(i=0;i<dim1;i++){
        for(j=0;j<dim2;j++){
            printf("\nValeur pour tab[%d][%d] ",i,j);
            scanf("%d",&tab[i][j]);
        }
    }

    puts("Tableau normal");

        for(i=0;i<dim1;i++){
            for(j=0;j<dim2;j++){
                printf("%d  ",tab[i][j]);
        }
        printf("\n");
    }

    puts("Tableau transposé");
                                // Façon 1 : inverser dim1/dim2 ET tab[i][j]
        for(i=0;i<dim2;i++){
            for(j=0;j<dim1;j++){
                printf("%d  ",tab[j][i]);
        }
        printf("\n");
    }

    puts("Tableau transposé");
                                // Façon 2 : inverser l'ordre des for(...)
        for(j=0;j<dim2;j++){
            for(i=0;i<dim1;i++){
                printf("%d  ",tab[i][j]);
        }
        printf("\n");
    }


return 0;
}

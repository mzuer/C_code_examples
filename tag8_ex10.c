/*
 * Initialiser un tableau avec les index, copier
 * dans un nouveau tableau et ajouter 10
 */

#include <stdio.h>

#define DIM 10

int main(void){

    int tab[DIM],tab2[DIM],i;

    for(i=0;i<DIM;i++){

        tab[i]=i;
    }

    for(i=0;i<DIM;i++){
        tab2[i]=tab[i]+10;
    }

    for(i=0;i<DIM;i++){
        printf("tableau 1:\t%d\t",tab[i]);
        printf("tableau 2:\t%d\n",tab2[i]);
    }

return 0;
}

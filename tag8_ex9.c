/*
 * Initialiser un tableau de 10 éléments avec son index
 * Et afficher les éléments
 */

#include <stdio.h>

#define DIM 5

int main(void){

int tableau[DIM],i;

for(i=0;i<DIM;i++){
    tableau[i]=i;
}

for(i=0;i<DIM;i++){
printf("%d\t",tableau[i]);
}

return 0;
}

/*
 * Initialiser un tableau de 10 �l�ments avec son index
 * Et afficher les �l�ments
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

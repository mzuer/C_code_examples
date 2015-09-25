/*
 * Assignement et concaténation de chaines
 */

#include <stdio.h>
#include <string.h>

int main (void){

    char ChaineACopier[10]="abcdef"; // On ne peut pas déclarer char *ChaineACopier = !!!
    char ChaineEcrasee[10]="1234567";

    printf("Chaine à copier : %s, à la place de : %s",ChaineACopier, ChaineEcrasee);

    strcpy(ChaineEcrasee,ChaineACopier);
    printf("\nRésultat : %s %s",ChaineACopier, ChaineEcrasee);



 return 0;
 }

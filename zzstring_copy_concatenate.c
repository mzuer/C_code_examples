/*
 * Assignement et concat�nation de chaines
 */

#include <stdio.h>
#include <string.h>

int main (void){

    char ChaineACopier[10]="abcdef"; // On ne peut pas d�clarer char *ChaineACopier = !!!
    char ChaineEcrasee[10]="1234567";

    printf("Chaine � copier : %s, � la place de : %s",ChaineACopier, ChaineEcrasee);

    strcpy(ChaineEcrasee,ChaineACopier);
    printf("\nR�sultat : %s %s",ChaineACopier, ChaineEcrasee);



 return 0;
 }

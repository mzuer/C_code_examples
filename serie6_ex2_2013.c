/*
 * SERIE 6 (2013) : EXERCICE 2 - récursivité : nbre de chiffres d'un entier
 */

#include <stdio.h>

int NbreChiffres (int entier);

int main(void){
    int nombre;

    puts("Entier dont on veut connaitre le nbre de chiffres :");
    scanf("%d",&nombre);

    printf("Ce nombre a %d chiffres",NbreChiffres(nombre));

return 0;
}

int NbreChiffres (int entier){

    if(entier/10==0){
        return 1;
    }

    else
        return 1+NbreChiffres(entier/10);

}


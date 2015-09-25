/*
 * SERIE 6 (2013) : EXERCICE  4 - récursivité : le n-ième chiffre d'un nbre
 */


#include <stdio.h>
#include <math.h>

int NChiffre(int entier, int n);
int NbreChiffres (int entier);

int main(void){

    int nombre,n;

    puts("Entier :");
    scanf("%d",&nombre);
    puts("Dont on veut connaitre le n-ième chiffres :");
    scanf("%d",&n);

    printf("\nLe n-ième chiffre de cet entier est : %d",NChiffre(nombre,n));

return 0;
}

int NChiffre(int entier, int n){

    int longueur=NbreChiffres(entier);

    if(n==longueur){
        return entier%10;
    }
    else
        return NChiffre(entier/10,n);

}

int NbreChiffres (int entier){

    if(entier%10==0){
        return 0;
    }

    else
        return 1+NbreChiffres(entier/10);
}

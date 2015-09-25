/*
 * Détermination d'un nombre factoriel
 *** un entier x est nbre factoriel s'il existe un autre entier y t.q. x=y!
 */

#include <stdio.h>

int nbre_factoriel(int x);

int main(void){

    int nbre;

    printf("Entrez un nombre ");
    scanf("%d",&nbre);

    if (!nbre_factoriel(nbre))
        printf("%d n'est pas un nombre factoriel",nbre);
    else
        printf("%d est un nbre factoriel",nbre);

return 0;
}

int nbre_factoriel(int x){

    int fact=1, n=1;

    while(fact<x && fact!=x){
        fact*=n;
        n++;
                               // if (fact==x){   /* si on met pas fact!=x
                               // break;
                                //}
    }


    if (fact==x){
        printf("%d est la factorielle de %d\n", n-1,x);
        return 1;
    }
    else
        return 0;
}

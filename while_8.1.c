/*
 * ITERATION WHILE : FACTORIELLE
 */

#include <stdio.h>

int factorielle (int n);
int fact (int n);

int main (void){

     int nbre;

     printf("Calculer la factorielle de : ");
     scanf("%d",&nbre);

     printf("\nLa factorielle de %d est %d",nbre,factorielle(nbre));

    printf("\nLa factorielle de %d est %d",nbre,fact(nbre));

return 0;
 }

int factorielle (int n){

    int i=1,fac=1;

    while (i<=n){
        fac*=i;
        i++;
    }
    return fac;
}

// OU MIEUX :

int fact (int n){

    int f=1;

    while (n>0){
        f*=n;
        n--;
        }
    return f;
}

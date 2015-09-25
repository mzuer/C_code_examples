/*
 * Somme des N premiers termes de la série harmonique
 */

#include <stdio.h>

double somme_serie_harmonique_it (int n);
double somme_serie_harmonique_rec (int n);


int main (void){

    int N;

    printf("Somme des N premiers termes de la série harmonique, N: ");
    scanf("%d",&N);

    printf("\nSomme vaut : %f = %f",somme_serie_harmonique_it(N),somme_serie_harmonique_rec(N));

}


double somme_serie_harmonique_it (int n){

    double somme=0;
    int i;

    for(i=1;i<=n;i++){
        somme+=1/(double)i;
    }

    return somme;

}


double somme_serie_harmonique_rec (int n){

    if(n==1){
        return 1;
    }

    return (double)1/n + somme_serie_harmonique_rec(n-1);
}

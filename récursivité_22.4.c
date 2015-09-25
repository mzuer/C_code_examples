/*
 * RECURSIVITE : COEFFICIENTS BINOMIAUX
 */

#include <stdio.h>

int coef_bi(int k,int n);

int main (void){

    int k,n;

    printf("Coefficients pour k<=n (entrer k puis n):");
    scanf("%d %d",&k,&n);
//n donne la ligne, k la position sur la ligne (numérotation commence à 0
    printf("\nCoefficient binomial pour %d,%d : %d",k,n,coef_bi(k,n));


return 0;
}


int coef_bi(int k,int n){

    if(k==0||k==n){
        return 1;
    }

    else {
        return coef_bi(k-1,n-1)+coef_bi(k,n-1);
    }
}

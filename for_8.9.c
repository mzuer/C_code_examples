/*
 * ITERATION FOR : suite de fibonacci, donner la valeur du n-i�me nbre de la suite
 * (pas la somme)
 */

#include <stdio.h>

int fibo(int n);

int main (void){

    int n;

    printf("calculer le ni�me de la suite de Fibonacci >");
    scanf("%d",&n);

    printf("\nle ni�me de la suite de Fibonacci vaut : %d",fibo(n));

return 0;

}

int fibo(int n) {

    int u=1, v=1;
    int i;

    for(i=2;i<=n;i++){

        v=u+v;   //valeur du n-i�me nombre = somme des 2 pr�c�dents
        u=v-u;  // redonner � u la valeur (^pour indice) ^n-2 (^n=^n-1+^n-2 => ^n-2=^n-^n-1

    }

    return v;

    }




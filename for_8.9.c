/*
 * ITERATION FOR : suite de fibonacci, donner la valeur du n-ième nbre de la suite
 * (pas la somme)
 */

#include <stdio.h>

int fibo(int n);

int main (void){

    int n;

    printf("calculer le nième de la suite de Fibonacci >");
    scanf("%d",&n);

    printf("\nle nième de la suite de Fibonacci vaut : %d",fibo(n));

return 0;

}

int fibo(int n) {

    int u=1, v=1;
    int i;

    for(i=2;i<=n;i++){

        v=u+v;   //valeur du n-ième nombre = somme des 2 précédents
        u=v-u;  // redonner à u la valeur (^pour indice) ^n-2 (^n=^n-1+^n-2 => ^n-2=^n-^n-1

    }

    return v;

    }




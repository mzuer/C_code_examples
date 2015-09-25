/*
 * RECURSIVITE : suite de Fibonacci -> calculer le n-ième terme
 */


#include <stdio.h>

int fibo(int n);

int main (void){

    int N;

    printf("Calculer le N-ième terme de la suite de Fibonacci :");
    scanf("%d",&N);

    printf("La Nième terme vaut : %d",fibo(N));

return 0;

}

int fibo(int n){

    if(n==0){
        return 0;
    }

    else if(n==1){
        return 1;
    }

    else {
        return fibo(n-1)+fibo(n-2);
    }

}


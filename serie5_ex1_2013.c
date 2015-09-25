/*
 * SERIE 5 (2013) : EXERCICE 1 - afficher la suite de Fibonacci
 */


#include <stdio.h>
int fibo_rec (n);

int main(void){

    int N;

    printf("Afficher la suite de Fibonacci jusqu'au N-ième nombre. N >");
    scanf("%d",&N);
   // fibo_it(N);
    printf("\n");
    fibo_rec(N);

return 0;
}

int fibo_rec (n){

    int i;

    if(n==1){

        return 1;

    }

    else if(n==0){

        return i=0;
    }

    else {
        printf("%d",fibo_rec(n-1)+fibo_rec(n-2));
        return fibo_rec(n-1)+fibo_rec(n-2);
    }

}

int fibo_it (n)

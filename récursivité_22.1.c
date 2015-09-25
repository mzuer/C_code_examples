/*
 * RECURSIVITE (22.1) : SOMME DES NOMBRES A LA PUISSANCE 4
 */


#include <stdio.h>
int somme(int n);

int main (void){

    int N;

    printf("la somme des nombres à la puissance jusqu'à n :");
    scanf("%d",&N);

    printf("La somme des nombres ^4 vaut : %d",somme(N));

return 0;
}

int somme(int n){

    if(n<=0){

            return 0;
    }

    else {
            return n*n*n*n+somme(n-1);

}
}

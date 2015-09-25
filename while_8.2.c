/*
 * ITERATION WHILE : LA SOMME DE n NOMBRES AU CUBE
 */

#include <stdio.h>

int cube (int n);

int main (void){

    int nbre;

    printf("somme n nbres :");
    scanf("%d",&nbre);

    printf("Somme des nombres au cube jusqu'à %d = %d",nbre,cube(nbre));

return 0;
}

int cube (int n){

    int somme=0;

    while(n>0){
        somme+=n*n*n;
        n--;
    }

return somme;

}

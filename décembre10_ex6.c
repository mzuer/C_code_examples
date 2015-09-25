/*
 * Nombre de Catalan
 */

#include <stdio.h>

double catalan (int n);
int catalan_b (int n);

int main(void){

    int n;

    scanf("%d",&n);
    printf("\n%f\n",catalan(n));
    printf("\n%d\n",catalan_b(n));


return 0;
}

double catalan (int n){

    if(n==0){
        return 1;
    }

    else
        return (double)(2*(2*n-1))/(n+1)*catalan(n-1);

}


int catalan_b (int n){

    int i,somme=0;

    if(n==0)
        return 1;

    else{
        for(i=0;i<n;i++){
         somme+=catalan_b(i)*catalan_b(n-1-i);
        }
    return somme;
    }
}


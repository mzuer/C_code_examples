/*
 * fonction de McCarthy
 */


#include <stdio.h>

int mc_carthy(int n);

int main(void){

    int nbre;

    scanf("%d",&nbre);

    printf("%d",mc_carthy(nbre));

}


int mc_carthy(int n){


    if(n>100){
        return n-10;
    }

    else
        return mc_carthy(mc_carthy(n+11));

}


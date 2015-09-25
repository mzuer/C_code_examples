/*
 * Donner les nbres premiers jusqu'à n
 */

#include <stdio.h>
#include <math.h>

int est_nbre_premier(int N);

int main(void){
    int nbre,i;

    printf("Entrez un nombre ");
    scanf("%d",&nbre);

    printf("\nLa liste des nombres premiers jusqu'à %d :\n",nbre);

    for(i=2;i<nbre+1;i++){
        if (est_nbre_premier(i)==0)
            printf("%d\n",i);
    }


return 0;
}

int est_nbre_premier(int N){

        int i, compteur=0;

    for(i=2;i<sqrt(N)+1;i++){

        if (N%i==0){
            //printf("%d et %d sont diviseurs de %d\n",i,N/i,N);
            compteur+=2;
        }
    }

    if(compteur==0){ //c'est un nombre premier
       // printf("\n%d est un nombre premier.",N);
        return 0;
    }
    else //if compteur !=0
        return 1;
}

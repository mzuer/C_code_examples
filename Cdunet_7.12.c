/*
 * 7.12 : Recherche d'une valeur dans un tableau
 */


#include <stdio.h>
#define DIM 7

int main(void){

    int tab[DIM]={1,4,8,15,18,19,20};
    int valeur,i,pos=-1;

    printf("Entrez une valeur à chercher dans le tableau ");
    scanf("%d",&valeur);

    for(i=0;i<DIM;i++){
        if(tab[i]==valeur){
            pos=i;
        }
    }

    if(pos==-1){
        printf("\nvaleur pas dans le tableau");
    }
    else{
        printf("\valeur %d en position %d dans le tableau suivant\n",valeur,pos+1);
        for(i=0;i<DIM;i++){
            printf("%d     ",tab[i]);
        }
    }
return 0;
}

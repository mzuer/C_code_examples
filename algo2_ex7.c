/*
 * Déterminer si un nombre est premier
 */


#include <stdio.h>
#include <math.h>

void nbre_premier(int N);
void nbre_premier_opt(int N);

int main(void){

    int nbre;

    printf("Entrez un nombre ");
    scanf("%d",&nbre);
    nbre_premier(nbre);
    printf("\n");
    nbre_premier_opt(nbre);

return 0;
}

void nbre_premier(int N){

        int i, compteur=0;

for(i=2;i<N;i++){

    if (N%i==0){
        printf("%d est un diviseur de %d\n",i,N);
        compteur++;
    }
}

if(!compteur){
    printf("\n%d est un nombre premier.",N);
}

else{
    printf("\n%d n'est pas un nombre premier, il a %d diviseurs",N,compteur+2); //+2 car1 et lui-même
}

return ;
}

void nbre_premier_opt(int N){

        int i, compteur=0;

    for(i=2;i<sqrt(N)+1;i++){           //si on met pas le +1 -> 4 passe pour un nbre premier

        if (N%i==0){
            printf("%d et %d sont diviseurs de %d\n",i,N/i,N);
            compteur+=2;    //mais ça pose problème pour tous les nombres qui sont des carrés d'autres nbres !!!
        }
    }

    if(!compteur){
        printf("\n%d est un nombre premier.",N);
    }

    else{
        printf("\n%d n'est pas un nombre premier, il a %d diviseurs",N,compteur+2); //+2 car1 et lui-même
    }

    return ;
}

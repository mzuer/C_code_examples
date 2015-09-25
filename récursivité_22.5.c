/*
 * RECURSIVITE : TOUR DE HANOI
 */

 //� chaque �tape seul 1  �l�ment peut �tre d�plac� du sommemt d'une tour vers le sommet d'une autre tour
 // � chaque T1,T2,T3 sont des tours de Hanoi


#include <stdio.h>


int main(void){

    int nbre;

    printf("nbre de pi�ces � d�placer de la tour vers C en utilisant B ");
    scanf("%d",&nbre);
    deplacer(nbre,'A','C','B');

return 0;
}


void deplacer(int n, char src, char dest, char aux){

    if(n==1){
        printf("De la tour %c � la tour %c\n",src,dest);
    }
    else{
        deplacer(n-1,src,aux,dest);
        deplacer(1,src,dest,aux);
        deplacer(n-1,aux,dest,src);
}

}


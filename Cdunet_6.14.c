/*
 * Triangle isocèle
 */


#include <stdio.h>

int main(void){

    int lignes,i,j,k;

    printf("Nbre de lignes ");
    scanf("%d",&lignes);

    for(i=0;i<lignes;i++){
        for(j=lignes;j>i-1; j--){ // OU for(j=0;j<lignes-i-1;j++)
            printf(" ");
        }
        for(k=0;k<2*i+1;k++){
            printf("*");
        }
    printf("\n");
    }


return 0 ;
}

/*
 * BOUCLES : DESSINER UN SAPIN
 */


 #include <stdio.h>

 int main (void){

    int lignes;
    int i=0, j=0,k=0;

    printf("Nombre de lignes : ");
    scanf("%d",&lignes);

    for(i=0;i<lignes;i++) {

/* Dessiner les espaces avant les "*" */
        for(j=lignes-i;j>0;j--){

            printf(" ");
        }
/* Dessiner les "*" */
        for(k=0;k<2*i+1;k++){

            printf("*");
        }

        printf("\n");
    }

return 0;

 }

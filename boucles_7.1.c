/*
 * BOUCLES : DESSINER UNE TRIANGLE
 */

 #include <stdio.h>

 int main (void){

    int lignes;
    int i=0, j=0;

    printf("Nombre de lignes : ");
    scanf("%d",&lignes);


    for(i=0;i<lignes;i++) {

        for(j=0;j<=i;j++) {
            printf("*");
        }

        printf("\n");

    }

 return 0;

 }

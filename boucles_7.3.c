/*
 * BOUCLES : DESSINER LE TRONC DU SAPIN
 */


 #include <stdio.h>

 int main (void){

    int lignes, colonnes ;
    int i=0, j=0;

    printf("Hauteur du tronc : ");
    scanf("%d",&lignes);

    printf("\nLargeur du tronc : ");
    scanf("%d",&colonnes);

    for(i=0;i<lignes;i++) {

            printf("    ");

            for(j=0;j<colonnes;j++)
                    printf("@");

            printf("\n");

    }

    return 0;
 }

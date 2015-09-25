/*
 * EXECUTION CONDITIONNELLE (5.2) : 2 TYPES DE PRODUITS, 2 TVA -> TTC

 ?? ne s'arrête pas pour le 2ème scanf !!

 */

#include <stdio.h>

float tva (char c);

int main(void) {

    char type=0;
    int prix;
    float tva=0;

    printf("Prix du produit : ");
    scanf("%d",&prix);

    printf("Type de produit (A ou B): ");
    scanf("%c",&type);

    if(type=='A'){
        tva=0.055;
    }

    else tva=0.196;

    printf("\nTaux : %f \t Prix TTC : %f",tva, prix*(1+tva));

}

/*
 * EXECUTION CONDITIONNELLE (5.5) : SAISIR + ET - AU CLAVIER
 * ET DETERMINER LE SIGNE DU PRODUIT
 */

 #include <stdio.h>

 int main (void){

    char sgn1,sgn2;

    printf("Entrez 2 signes (+ ou -): ");
    scanf("%c %c",&sgn1,&sgn2);

    if((sgn1=='+'&&sgn2=='+')||sgn1=='-'&&sgn2=='-'){
        printf("Produit +");
    }
    else printf("Produit -");



return 0;
    }

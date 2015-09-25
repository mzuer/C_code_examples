/*
 * EXECUTION CONDITIONNELLE (5.6) : SOMME ET PRODUIT DE 2 NOMBRES
 * UTILISATEUR PEUT CHOISIR QUEL CALCUL EFFECTUER
 */


#include <stdio.h>

int main(void){

    int a,b,choix;

    printf("Deux nombres :");
    scanf("%d %d",&a,&b);

    printf("Quel calcul \n1-somme paire\n2-produit pair\n3-signe somme\n4-signe produit\n");
    scanf("%d",&choix);

    switch(choix){

    case 1:
//Somme paire ?
    if((a+b)%2==0){
        printf("\nsomme paire");
    }
    else printf("\nsomme impaire");
    break;

    case 2:
// Poduit pair ?
    if((a*b)%2==0){
        printf("\nproduit pair");
    }
    else printf("\nproduit pair");
    break;

    case 3:
//Signe de la somme
    if(a+b<0)
        printf("\nsomme négative");
    else printf("\nsomme positive");

    case 4:
//Signe du produit
    if(a*b<0)
        printf("\nproduit négatif");
    if(a*b>0)
        printf("\nproduit positif");
    break;

    default:
    printf("Il fallait entrer un chiffre entre 1 et 4");

}
return 0;
}

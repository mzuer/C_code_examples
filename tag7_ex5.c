/*
 * Demander des valeurs tant que l'utilisateur rentre 99 ou 6 chiffres pairs
 * Enregistrer les nombres dans un tableau
 */

#include <stdio.h>

int main (void){

    int i,nbre,tableau[6];

    for(i=0;i<6 && nbre!=99;i++){

    printf("Rentrez 1 nombre ou 99 pour quitter\n");
    scanf("%d",&nbre);

    while(nbre%2==1 && nbre!=99){                          //%2!=0 OU %2==1
        printf("Ce n'est pas un nombre pair, rentrez un nveau nbre\n");
        scanf("%d",&nbre);
    }

    tableau[i]=nbre;
    }


//Afficher le tableau :

    for(i=0;i<6 && nbre!=99;i++){
        printf("%d\n",tableau[i]);
    }
return 0;
}

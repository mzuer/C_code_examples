/*
 * 8.3 : lire une chaine, afficher longueur, occurence du caractère souhaité, envers
 */

#include <stdio.h>
#include <string.h>

int main (void){

    char s[100],car;
    int i,longueur,occurence=0;

    puts("Entrez une chaine <100 caract");
    gets(s);

    for(i=0;s[i]!='\0';i++){
        s[i];
        longueur=i+1;
    }
    // OU longueur=i ICI APRES L'ACCOLADE
    printf("\nLongueur de la chaine %d (%d)\n",longueur,strlen(s));

    puts("Trouver le caractère suivant");
    scanf("%c",&car);

    for(i=0;i<longueur;i++){
        if(s[i]==car){
            printf("\nTrouvé ! En position %d",i+1);
            occurence++;
        }
    }

    if(!occurence){
        printf("\n\"%c\" n'est pas dans cette chaine",car);
    }
    else{
        printf("\n%c apparait %d fois dans la chaine",car,occurence);
    }



return 0;
}

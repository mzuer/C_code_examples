/*
 * CHAINES DE CARACTERES
 *** Déclaration, initialisation, assignement ***
 */

#include <stdio.h>
#include <string.h>

int main (void){

// Différentes initialisations possibles :
    char prenom[]="Porki";
    char nom[20]="Zufferey";
    char* id=nom;   //déclaration possible ainsi que pour les tableaux char, pas pour les autres
    char* result;

// Différents moyens pour afficher une chaine :

    printf("%s %s %s \n",prenom,nom,id);
    puts(prenom);                      // NB : puts ne peut prendre qu'un argument !!!

    result=strcpy(nom,prenom);
    puts(result);

    id=prenom;                  // ne se fait pas avec les autres types de tableaux
    strncpy(id,"allo",2);       //donne "alrki" => n'ajoute pas automatiquement le caractère \0
    puts(id);

    id=prenom;
    strncpy(id,"allo",2);
    id[2]='\0';
    puts(id);

// Utiliser 'strncpy' pour extraire des sous-chaines

    char msg[50]="Je suis Marie Zufferey";
    char nom2[10],prenom2[10];

    strncpy(prenom2,&msg[8],5); //donner le 1er caractère &...[] à partir duquel copier
    prenom2[6]='\0';

    strncpy(nom2,&msg[14],8);
    nom2[8]='\0';

    printf("%s %s",prenom2,nom2);

//Longueur des chaines

    printf("\nLongueur prénom : %d\n", strlen(prenom2));
    printf("Longueur nom : %d\n", strlen(nom2));

    char *identifiant;
    identifiant=strcat(prenom2,nom2); //=> donne MarieZufferey
    puts(identifiant);

    char *id2;
    char nom3[]="Zufferey";
    id2=strncat(nom3,prenom2,1);    //=> donne ZuffereyM
    puts(id2);

// Comparaison de chaines

printf("%d \n",strcmp("Jo","Dalton"));       //=> 1
printf("%d \n",strcmp("Dalton","Jo"));      // => -1
printf("%d\n",strcmp("Jo","Jo"));           // => 0




return 0;
 }

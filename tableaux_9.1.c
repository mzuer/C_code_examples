/*
 * TABLEAUX : REMPLIR UN TABLEAU DE 10 CARACTERES AVEC LE CODE ASCII ET AFFICHER
 */

 #include <stdio.h>


 int main (void){

    int i=0;
    char tab[11];

    for(i=0;i<10;i++){
        tab[i]='A'+i;   // OU : tab[i]=65+i;
    }

    tab[11]='\0';

 /* Affichage comme chaine de caractères */

    printf("%s\n",tab);     // OU : printf("%s\n",&tab[0]);     => tab et &tab[0] sont égaux


/* Affichage comme tableau */

for (i=0;i<10;i++){

    printf("Caractère %d : %c\n",tab[i],tab[i]);
}

return 0;

 }

#include <stdio.h>
#include <string.h>

int main (void){
/*
char chaine[100]="Hello";
char *s;

//chaine="Hello";
puts(chaine);
s=chaine;
puts(s);
*/
char chaine[100];
//asaisie_chaine();

puts("\nCalculer la longueur de la chaine");
gets(chaine);
printf("\nChaine de longueur %d",longueur_chaine(chaine));
}

void saisie_chaine (void){

    char *chaine[100];
    char *chaine2[100];          //char *chaine; => ca ne marche pas !!!

    puts("1ère chaine : phrase ou mot");
    gets(chaine);
    puts(chaine);
    printf("%s",chaine);

    puts("\n2ème chaine : 1 mot");
    gets(chaine2);
    scanf("%s",chaine2);
    puts(chaine2);
    printf("%s",chaine2);
}

int longueur_chaine (char *string){

return strlen(string);

}

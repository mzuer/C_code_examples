/*
 * Pangramme = phrase qui contient toutes les lettres de l'alphabet
 */

#include <stdio.h>

int pangramme (char *s);

int main(void){

char chaine[150];
puts("Entrez une chaine, max. 150 caract.");
gets(chaine);

if(!pangramme(chaine))
    puts("La chaine n'est pas un pangramme");
else                                             //if pangramme(chaine)==0
    puts("Cette chaine est un pangramme");



return 0;
}

int pangramme (char *s){

int n=strlen(s);
int i,compteur=0;
char j;

//Commencer par tout convertir en minuscules

for(i=0;i<n;i++){
    if(!islower(s[i]))
        s[i]=tolower(s[i]);
}
//vérifier :
puts(s);

for(j='a';j<='z';j++){
    for(i=0;i<n;i++){
        if(s[i]==j){
            compteur++;
            break;
        }
    }
}
printf("\n%d\n",compteur);

if(compteur==26)
    return 1;

else
    return 0;

}


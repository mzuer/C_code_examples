/*
 * Chaine de caractères : INVERSION DE CHAINE
 /// NE MARCHE PAS
 */

 #include <stdio.h>
 #include <ctype.h>

 void inverse(char *s, int n){

    int i;
    char c; // variable temporaire : passer une v.t. pour faire l'échange

    for(i=0;i<n/2;i++){

        c=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=c;

    }

    puts(s);

 return ;
 }

 int main (void){

    char *chaine;
    char phrase[100];
    int n;
    gets(phrase);
    chaine=phrase;
    n=strlen(chaine);
    inverse(chaine,n);

 }

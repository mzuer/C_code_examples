/*
 * Chaine de caractères : PALINDROME
 // NE MARCHE PAS => RENVOIE TOUT LE TEMPS "ce n'est pas un palindrome"
 */


#include <stdio.h>
#include <string.h>

int palindrome (char *s, int n);

int main (void){

    char chaine[15]; // char *chaine; ça ne marche pas !!!
    int longueur;

    printf("tapez votre mot (15 lettres max) :\n");
    gets(chaine);
    longueur=strlen(chaine);

    if(palindrome(chaine,longueur-1)==0){           //soit envoyer longueur-1 soit mettre [n-i-1]
        printf("\nce n'est pas un palindrome");
    }
    else {

        printf("\nc'est un palindrome");
    }


return 0;
}

int palindrome (char *s, int n){

    int i;

    for(i=0;i<n/2;i++){  //i<n va aussi => avec n/2 on optimise
        if(s[i]!=s[n-i]){                          //soit envoyer longueur-1 soit mettre [n-i-1]
            return 0;
        }
    }
    return 1;
}

/*
 * SERIE 7 (2013) : EXERCICE 1 - anagramme
 */

#include <stdio.h>
#include <string.h>

int testAnagramme(char *a, char *b);

int main (void){

    char s1[100];
    char s2[100];

    puts("Entrez 1ère chaine");
    gets(s1);
    puts("Entrez 2ème chaine");
    gets(s2);

    if(testAnagramme(s1,s2)==0){
        printf("\nCe ne sont pas des anagrammes");
    }

    else{
        printf("\n\"%s\" et \"%s\" sont des anagrammes !",s1,s2);
    }

return 0;
}

int testAnagramme(char *a, char *b){

    int i,j,compteur=0;

    if(strlen(a)!=strlen(b)){
        return 0;
    }
    else{
        for(i=0;i<strlen(a);i++){
            for(j=0;j<strlen(b);j++){
                if(a[i]==b[j]){
                    compteur=1;
                }
            }
            if(compteur==0)
                break;
            if(i==strlen(a)-1)
                break;
            compteur=0;

        }
        if (compteur==0)
            return 0;
        if (compteur==1)
            return 1;
    }
}


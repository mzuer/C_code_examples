/*
 * SERIE 7 (2013) : EXERCICE 3 - valeur d'un mot au Scrabble
 */

#include <stdio.h>
#include <string.h>

int scrabbleValue (char *mot);

int main (void){

    char mot[30];

    puts("Entrez un mot");
    gets(mot);

    printf("\nLe mot entré vaut %d",scrabbleValue(mot));

return 0;
}

int scrabbleValue (char *mot){

    int i;
    int somme=0;

    for(i=0;i<strlen(mot);i++){

       //Tout mettre en majuscule
       if(!isupper(mot[i])){
        mot[i]=toupper(mot[i]);
       }

        if(mot[i]=='A'||mot[i]=='E'||mot[i]=='I'||mot[i]=='L'||mot[i]=='N'
            ||mot[i]=='O'||mot[i]=='R'||mot[i]=='S'||mot[i]=='T'||mot[i]=='U'){
                somme+=1;
            }
        else if(mot[i]=='D'||mot[i]=='G'||mot[i]=='M'){
            somme+=2;
        }
         else if(mot[i]=='B'||mot[i]=='C'||mot[i]=='P'){
            somme+=3;
        }
         else if(mot[i]=='F'||mot[i]=='H'||mot[i]=='V'){
            somme+=4;
        }
         else if(mot[i]=='J'||mot[i]=='Q'){
            somme+=8;
        }
         else if(mot[i]=='K'||mot[i]=='W'||mot[i]=='X'||mot[i]=='Y'||mot[i]=='Z'){
            somme+=10;
        }

    }
return somme;

}

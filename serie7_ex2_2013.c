/*
 * SERIE 7 (2013) : EXERCICE 2 - comparaison de chaines insensible � la casse
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int icharcmp(char a, char b);
int istrcmp(const char *a, const char *b);

int main(void){

    char ch1[100];
    char ch2[100];

    puts("Entrez chaine 1");
    gets(ch1);
    puts("Entrez chaine 2");
    gets(ch2);


    if(istrcmp(ch1,ch2)==0){
        printf("chaine 1 et chaine 2 �gales");
    }

    else if(istrcmp(ch1,ch2)<0){
        printf("chaine 1 lexicograhiquement inf�rieure � chaine 2");
    }

    else{            // if(istrcmp(ch1,ch2)>0){
        printf("chaine 1 lexicograhiquement sup�rieure � chaine 2");
    }


return 0;
}

//Fonction de comparaison des chaines
int istrcmp(const char *a, const char *b){

    int i;

    for(i=0;a[i]!='\0'||b[i]!='\0';i++){

        if (icharcmp(a[i],b[i])==-1){
            return -1;
        }

        else if (icharcmp(a[i],b[i])==1){
            return 1;
        }
     }
    return 0; //il faut bien mettre return 0 ici car sinon fait un return 0 apr�s le 1er caract�re �gal.
}

//Fonction de comparaison des caract�res des chaines
int icharcmp(char a, char b){

    //Convertir en minuscules les caract�res pass�s en param�tres
    if (islower(a)!=islower(b)){
        if(!islower(a)){
            a=tolower(a);
        }
        else if(!islower(b)){
            b=tolower(b);
        }
    }

    if(a==b){
        return 0;
    }

    else if(a<b){
        return -1;
    }

    else {        //if(a>b){
        return 1;
    }
}


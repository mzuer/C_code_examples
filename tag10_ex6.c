/*
 * Enregistrer 2 chaines
 * comparer leur longueur et afficher la plus longue
 */

 #include <stdio.h>
 #include <string.h>

 int main(void){

    char s1[100], s2[100]; // OU *s1[100] ; il faut mettre le [NBRE] !!! *s1 ou s1[] ou *s1[] = FAUX !

    puts("Entrez les 2 chaines");
    gets(s1);
    gets(s2);
    puts("Vous avez entrez :");
    puts(s1);
    puts(s2);

    puts("\nLa chaine la plus longue est :");
    compare_chaine(s1,s2);

    puts("\n\nLa chaine la plus longue est :");
    compare_chaine2(s1,s2);


 return 0;

 }

void compare_chaine(char *chaine1, char *chaine2){

    if (strcmp(chaine1,chaine2)==0){
        puts("Chaines de même longueur");
    }

    else if(strcmp(chaine1,chaine2)>0){
        puts(chaine1);
    }

    else {
        puts(chaine2);
    }

}

void compare_chaine2(char *ch1, char *ch2){

    if (strlen(ch1)==strlen(ch2)){
        puts("Chaines de même longueur");
    }

    else if(strlen(ch1)>strlen(ch2)){
        puts(ch1);
    }

    else {
        puts(ch2);
    }

}

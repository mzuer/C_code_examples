/*
 * Tableaux de chaines
 *** Contiennent les adresses des chaines ***
 *** Permet de réorganiser les chaines sans les copier ***
*/

#include <stdio.h>

int main (void){

char pomme[]="pomme";
char banane[]="banane";
char kiwi[]="kiwi";
char *fruits[3];
char *tmp;      //char tmp[] ne marche pas !!!

fruits[0]=pomme;
fruits[1]=banane;
fruits[2]=kiwi;


// Tri des chaines :

tmp=fruits[0];
fruits[0]=fruits[1];
fruits[1]=fruits[2];
fruits[2]=tmp;


return 0;

}
/*
NB : int main (int argc, char *argv[])
=> reçoit en paramètres un tableau de argc chaines de caractères argv[0], argv[1], etc.
*/

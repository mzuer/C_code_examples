/*
 * Palindrome avec fonction récursive
 */

#include <stdio.h>
#include <string.h>

int est_palindrome(char *s,int debut, int fin);

int main (void){

    char mot[50];
    puts("Entrez mot :");
    gets(mot);

    if(!est_palindrome(mot,0,strlen(mot)-1)){
        printf("%s n'est pas un palindrome",mot);
    }
    else /*if(est_palindrome(...))*/{
      printf("%s est un palindrome",mot);
    }

return 0;
}

int est_palindrome(char *s,int debut, int fin){

    if (debut==fin){
        return 1;
    }
    else if(s[debut]!=s[fin]){
        return 0;
    }
    else {
        return est_palindrome(s,debut+1,fin-1);
    }
}

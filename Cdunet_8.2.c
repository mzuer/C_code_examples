/*
 * 8.2 : lire et afficher dans l'ordre inverse 5 mots
 */

 #include <stdio.h>

 int main(void){

    char s1[50],s2[50],s3[50],s4[50],s5[50];

    printf("Tapez une phrase de 5 mots\n");
    scanf("%s %s %s %s %s",s1,s2,s3,s4,s5);
    puts("En ordre inverse ");
    printf("%s %s %s %s %s",s5,s4,s3,s2,s1);


 return 0;
 }

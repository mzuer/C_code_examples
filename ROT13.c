/*
 * Chaine de caractères : ROT 13
 */

 #include <stdio.h>
 #include <string.h>

 void rot13 (char *s, int n);

 void rot13 (char *s, int n){

     int i;
     for(i=0;i<n;i++){
        if(s[i]<='M'){
            s[i]+=13;
        }
        else {
            s[i]-=13;
        }
     }

       puts(s); // ou printf("%s",s);


      return;
 }

 int main (void){

     char chaine[100];
     char *message;
     int n;

     printf("rentrez votre message : ");
     gets(chaine);
     message=chaine;
     n=strlen(message);
     rot13(message,n);


 return 0;

 }

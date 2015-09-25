/*
 * Conversion de caractères
 */

 #include <stdio.h>
 #include <string.h>

 void inverse(char *s);
 void inverse_2(char *s);

 void inverse (char *s){
     int i;
     for(i=0;s[i]!='\0';i++){
        if(isupper(s[i])){
                s[i]=tolower(s[i]);
        } else if (islower(s[i])){
                s[i]=toupper(s[i]);
        }

     }
return ;
}


 void inverse_2 (char *s){
     int i;
     for(i=0;i<strlen(s);i++){
        if(isupper(s[i])){
                s[i]=tolower(s[i]);
        } else if (islower(s[i])){
                s[i]=toupper(s[i]);
        }

     }
return ;
}

 int main (void){

     char chaine[100];
     gets(chaine);
     inverse(chaine);
     puts(chaine);

     char chaine2[100];
     gets(chaine2);
     inverse_2(chaine2);
     puts(chaine2);


 return 0;

 }



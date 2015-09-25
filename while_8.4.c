 #include <stdio.h>

 int main (void){

 char cA;

 do{

    printf("choisissez un candidat : ");
    scanf("%c",&cA);
 }
 while(cA!='A'&&cA!='B');

 return 0;}

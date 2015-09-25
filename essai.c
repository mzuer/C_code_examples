/* Fichier chaine1.c  : un exemple sur les chaines de caract�res */

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

  /* compter + retourner le nombre de voyelles dans une cha�ne */
  int nbVoy(char ch[])
  {
     int n = 0, i, nbCar = strlen(ch);
     for(i = 0; i < nbCar; i++)
       switch (toupper(ch[i]))
       {
          case 'A' : case 'E' : case 'I' :
          case 'O' : case 'U' : case 'Y' :  n++;
       }
     return n;

  }


  void demo1()
  {
    char souhait[20] = "Bonjour!" ;
    int i, k = strlen(souhait) ;

    printf("Premiere demonstration :\n");
    printf("souhait : %s de longueur %d caracteres\n", souhait, k);

    printf("Le nombre de voyelles : %d\n", nbVoy(souhait));

    printf("la chaine a l'envers :");
    for(i = k-1; i>= 0; i--)
        printf("%c", souhait[i]);
    printf("\n");

  }


  void demo2()
  {
    char * chaine = (char *) malloc(80); /* memory allocation */
    printf("\nDeuxieme demonstration :\n");
    printf("Tapez la chaine ");
    gets(chaine);
    printf("La chaine lue %s de longueur %d caracteres\n", chaine, strlen(chaine));
    strupr(chaine);
    printf("La chaine en tous majuscules %s de longueur %d caracteres\n", chaine, strlen(chaine));
    strlwr(chaine);
    printf("La chaine en tous minuscules %s de longueur %d caracteres\n", chaine, strlen(chaine));
    printf("\n");
    printf("Le nombre de voyelles : %d\n", nbVoy(chaine));
    char * p = strchr(chaine, 'o');
    printf("strchr .... : %s\n", p);

    p = strstr(chaine, "our");
    if (p)
       printf("strstr .... : %s\n", p);
    else
       printf("On ne la trouve pas\n");

  }

  int estPalindrome(char * ch)
  {
    int i, j ;
    for(i = 0, j = strlen(ch)-1; i < j; i++, j--)
         if (ch[i] != ch[j])
              return 0;
    return 1;

  }

  void demo3()
  { int i, j ;
    char * chaine = (char *) malloc(90); /* memory allocation */

    printf("\nTroisieme demonstration :\n");
    printf("Tapez la chaine ");
    gets(chaine);
    printf("La chaine lue est %s\n", chaine);


    (chaine);
    char * conversion = (char *) malloc(90);
    j = 0;
    for(i = 0; i < strlen(chaine); i++)
       if ( chaine[i] >= 'A' && chaine[i] <= 'Z')
                 conversion[j++] = chaine[i];
    conversion[j] = '\0';
    printf("La chaine convertit : %s\n", conversion);
    if (estPalindrome(conversion))
      printf("est un palindrome!\n");
    else
      printf("Ce n'est pas un palindrome\n");


   }

int main()
{
  demo1();
  demo2();
  demo3();
  printf("\n");
  system("pause") ;
  return 0;
}
/* Ex�cution:
Premiere demonstration :
souhait : Bonjour! de longueur 8 caracteres
Le nombre de voyelles : 3
la chaine a l'envers :!ruojnoB

Deuxieme demonstration :
Tapez la chaine Bonsoir!
La chaine lue Bonsoir! de longueur 8 caracteres
La chaine en tous majuscules BONSOIR! de longueur 8 caracteres
La chaine en tous minuscules bonsoir! de longueur 8 caracteres

Le nombre de voyelles : 3
strchr .... : onsoir!
On ne la trouve pas

Troisieme demonstration :
Tapez la chaine Tu l'as trop ecrase, Cesar, ce Port Salut!
La chaine lue est Tu l'as trop ecrase, Cesar, ce Port Salut!
La chaine convertit : TULASTROPECRASECESARCEPORTSALUT
est un palindrome!

Appuyez sur une touche pour continuer...

*/

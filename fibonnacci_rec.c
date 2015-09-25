/*
 * Nombres de Fibonnacci par fonction récursive
 */

 #include <stdio.h>

 int main (void){

    int nbre;

    printf("Calculer le n-ième nombre de Fibonnaci :");
    scanf("%d",&nbre);

    printf("Le %dième nombre de Fibonnaci vaut %d",nbre,fib(nbre));

    printf("\nLe %dième nombre de Fibonnaci vaut %d",nbre,fib_it(nbre));

 return 0;
 }


 int fib (int n){

    // Définition des cas simples
    if (n==1||n==2)             // ou if(n==0) return 0; if(n==1) return 1;
        return 1;

    else
        return fib(n-1)+fib(n-2);

    // Toujours appels récursifs à des niveaux inférieurs !!!

 }

 int fib_it (int n){

    int a=0, b=1,c;

    while (n>1){
        c=b;
        b+=a;
        a=c;            //  ou a=b-a;
        n--;
    }
    return b;
 }



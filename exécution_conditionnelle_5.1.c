/*
 * EXECUTION CONDITIONNELLE (5.1): LIRE ET AFFICHER 2 VARIABLES DANS L'ORDRE CROISSANT
 */

 #include <stdio.h>

 int main (void){

    int a,b,min,max,n1,n2,temp;

    printf ("donner 2 nombre entiers :");
    scanf("%d %d",&a,&b);

    if(a>b){
        min=b;
        max=a;
    }
    else {
        min=a;
        max=b;
    }
    printf("\nDans l'ordre croissant : %d < %d", min,max);



// OU PLUS SIMPLE

   printf ("\ndonner 2 nombre entiers :");
    scanf("%d %d",&n1,&n2);

    if(n1>n2){
        temp=n1;
        n1=n2;
        n2=temp;
    }

    printf("\nDans l'ordre croissant : %d < %d", n1,n2);

 }

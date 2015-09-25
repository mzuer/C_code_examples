/*
 * BOUCLES & TABLE ASCII
 *** Afficher sur des lignes successives les codes ASCII
     avec les caractères qui leur correspondent (de debut à fin) ***
 */


 #include <stdio.h>

 int main (void){

    int debut, fin;
    int i=0;

    do{
    printf("Commencer au caractère n° : ");
    scanf("%d",&debut);

    printf("\nJusqu'au caractere n°: ");
    scanf("%d",&fin);
    }
    while(debut<0 || fin<0);

    for(i=debut;i<=fin;i++) {
            printf("%d : %c\n",i,i);
    }

    return 0;
 }

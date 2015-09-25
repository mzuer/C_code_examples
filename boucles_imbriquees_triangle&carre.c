/*
 * Boucles imbriquées
   utiliser une boucle à l 'intérieur d'une autre boucle
 *** Dessiner un carré et un triangle ***
 */

int main (void){

    int choix=0;
    int taille;

    printf("Choisissez la dimension > ");
    scanf("%d",&taille);

    while(choix!=1&&choix!=2) {
        choix=ChoixUtilisateur();
    }

    if (choix==1){
        printf("Voici un carré de dimension %d\n",taille);
        carre(taille);
    }

    else {
        printf("Voici un triangle de dimension %d\n",taille);
        triangle(taille);
    }

return 0;
}


int ChoixUtilisateur(void){

    int n=0;

    printf("Tapez 1 pour dessiner un carré, 2 pour un triangle ");
    scanf("%d",&n);

    return n;

}


//Dessiner un carré

void carre(int dimension){
    int i, j;

    for(i=0;i<dimension;i++){
        for(j=0;j<dimension;j++){
            printf("*");
        }
        printf("\n");
    }

return 0;
}

//Dessiner un triangle

void triangle(int dimension)
{
    int i, j;

    for(i=0;i<dimension;i++){
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

return 0;
}



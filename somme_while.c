/*
 * Moyenne de plusieurs nombres avec while
 *** Moyenne d'un nombre de chiffres d�fini par l'utilisateur ***
 */

 int main (void){

    int compteur, nombre;
    float valeur, somme,somme2;

    printf("Nombre de valeurs");
    scanf("%d",&nombre);

    compteur=0;
    somme=0.0;
    somme2=0;

    while(compteur<nombre){

        printf ("\nValeur :");
        scanf("%f",&valeur);
        somme+=valeur;
        somme2+=valeur;
        compteur++;

    }

printf("R�sultat : %f \n",somme/(float)nombre);
printf("R�sultat : %f\n",somme/nombre);
printf("R�sultat : %f",somme2/nombre);
 return 0;
 }

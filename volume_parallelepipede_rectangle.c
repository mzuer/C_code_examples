/*
 * Volume d'un parallélépipède rectangle
 *** Tableaux ***
 */

 #include <stdio.h>
 #include <math.h>

 int main (void){

    float vol;
    float p1[3],p2[3];

    printf("Coordonnées du 1er point > ");
    scanf ("%f %f %f",&p1[0],&p1[1],&p1[2]);

    printf("\nCoordonnées du 2ème point > ");
    scanf ("%f %f %f",&p2[0],&p2[1],&p2[2]);

    vol =   fabs(p2[0]-p1[0])*
            fabs(p2[1]-p1[1])*
            fabs(p2[2]-p1[2]);

    printf("\nLe volume est de %f",vol);

 return 0;
 }

/*
 * nbrepproximation de la carr�e par r�currences : racinej+1=(racinej+nbre/racinej)/2racine1
 */


#include <stdio.h>

int main(void){

 double nbre;
 double racine;   /* approximation de la racine carr�e de nbre */
 int precision;
 int approx;

 do
    {
      printf("Entrer le r�el positif nbre : ");
     scanf("%lf", &nbre);
    }
 while(nbre<0);

 do
    {
      printf("Entrer le degr� de l'approximation : ");
     scanf("%d", &precision);
    }
 while(precision<=0 || precision>=50);

 for(racine=nbre, approx=1 ; approx<=precision ; approx++)
     {
      racine = (racine + nbre/racine) / 2;
      printf("La %d%s approximation de la racine carr�e"
             " de %f est %f\n", approx, (approx==1)?"�re":"e", nbre, racine);
     }
  return 0;
}






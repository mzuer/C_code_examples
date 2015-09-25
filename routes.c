/* 
 * routes et météo
 */

#include <stdio.h>

int main (void)
{
int pluie;
int temperature;

printf("\n\nest-ce qu'il pleut ? 1 pour oui, 0 pour non >");
scanf("%d",&pluie);

if(pluie!=0|pluie!=1){
printf("\nentre 0 ou 1 >")
scanf("%d",&pluie)
}

printf("\n\net quelle température fait-il ? entre un nombre entier >");
scanf("%d",&temperature);

printf("voici les previsions\n");

if(pluie==0){
printf("routes bonnes");
}
else if(temperature<0){
printf("routes enneigees");
} else {
printf("routes mouillées");
}

return 0;
}

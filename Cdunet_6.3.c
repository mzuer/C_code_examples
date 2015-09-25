/*
 * 6.3 : calculer par soustraction successive le quotient entier
 * et le reste de la division entière de 2 entiers entrés au clavier
 */

 #include <stdio.h>

void division_entiere(int a, int b);

int main(void){

    int a,b;

    printf("2 entiers à diviser (1er par le 2ème): ");
    scanf("%d %d",&a,&b);

    division_entiere(a,b);

return;
}

void division_entiere(int numerateur, int denominateur){

    int reste, quotient=0;

    reste=numerateur;

    while(reste>=denominateur){
        reste-=denominateur;
        quotient++;
    }

    printf("Quotient : %d, reste : %d",quotient, reste);

return ;

}


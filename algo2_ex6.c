/*
 * D�composition d'un nombre en base 8

 *** EX : 2500 -> 4704
 * diviser par 8, reste de la 1�re division donne les unit�s, le reste de la 2�me division les dizaines, etc.

 */

void base_8_it(int n);
void base_8_rec(int n);

int main(void){

    int nbre;

    printf("Entrez un nombre ");
    scanf("%d",&nbre);
    base_8_it(nbre);
    printf("\n");
    base_8_rec(nbre);

return 0;

}

// Mise en oeuvre it�rative : afficher les unit�s, les dizaines, etc


void base_8_it(int n){

    while(n){
    printf("%d\n",n%8);
    n/=8;
    }


 return ;
 }


//Mise en oeuvre r�cursive : afficher le nombre


void base_8_rec(int n){

    if(!n){             // if (n==0)
        return ;
    }

    else {
        base_8_rec(n/8);
                            // printf("%d",n%8); peut aussi se mettre ici
    }

    printf("%d",n%8);

  }

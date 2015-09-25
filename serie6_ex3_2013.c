/*
 * SERIE 6 (2013) : EXERCICE 3 - récursivité : inverser l'ordre des chiffres d'un entier
 */


#include <stdio.h>
#include <math.h>

void inverseChiffres(int entier);
int inverseChiffres_2(int entier);
int inverseChiffres_3(int entier);
int inverseChiffres_4(int entier);
int inverse_it(int entier);
int NbreChiffres (int entier);

int main (void){

    int nombre;

    puts("Entier dont on veut inverser les chiffres :");
    scanf("%d",&nombre);

    printf("ce nombre a %d chiffres",NbreChiffres(nombre));

   printf("Ce nombre inversé : ");
   inverseChiffres(nombre);
   printf("\nCe nombre inversé : %d",inverseChiffres_2(nombre));
   printf("\nCe nombre inversé : %d",inverseChiffres_3(nombre));
   printf("\nCe nombre inversé : %d",inverseChiffres_4(nombre));
   printf("\nCe nombre inversé : %d",inverse_it(nombre));

return 0;
}

// 1ère façon de faire - fonction type void
void inverseChiffres(int entier){

    if(entier/10==0){
        printf("%d",entier%10);
        return;
    }

    else
        printf("%d",entier%10);
        return inverseChiffres(entier/10);
}

//2ème façon de faire - fonction type int - boucle itérative
int inverseChiffres_2(int entier){

    int nbre_inverse=0;
    int temp=entier;

    do{
        nbre_inverse=10*nbre_inverse+temp%10;
        temp=temp/10;
    }
    while(temp);

    return nbre_inverse;
}

//2ème façon de faire - fonction type int - boucle récursive et pow
int inverseChiffres_3(int entier){

    int n=NbreChiffres(entier);

    if(entier/10==0){
        return entier%10;
    }
    else{
        return pow(10,n-1)*(entier%10)+inverseChiffres_3(entier/10);
    }

}
//3ème façon de faire - fonction type int - boucle récursive sans pow/*
int inverseChiffres_4(int n){
        if(n==0)
                return 0;
        else
                {
                int pos=NbreChiffres(n)-1;
                int c=n%10;
                int i;
                for(i=0;i<pos;i++){
                        c*=10;
                }
                return c+inverseChiffres_4(n/10);

                }


}

int NbreChiffres (int entier){

    if(entier==0){
        return 0;
    }

    else
        return 1+NbreChiffres(entier/10);

}

int inverse_it (int entier){

int n=NbreChiffres(entier),i;
int entier_inv=0;

for(i=n;i>0;i--){
    if(entier/10==0){
        entier_inv=(entier_inv+entier%10);
    }
    else{
    entier_inv=(entier_inv+entier%10)*10;
    entier/=10;
    }
}

return entier_inv;
}

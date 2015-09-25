/*
 * trier un tableau d'entier par odre croissant de leur valeur absolue
  * valeur n�gative avant la valeur positive
 */
#include <stdio.h>

void tri (int tab[], int taille);
void tri_inverse(int tab[], int taille);
int my_fab(int n);
int compare (int a, int b);

int main(void){

    int tab[]={6,-15,3,10,-8,6,15,-3,-6};

    tri(tab,9);
    printf("\n");
    tri_inverse(tab,9);
}


void tri (int tab[], int taille){

int i,j,temp;

for(i=0;i<taille-1;i++){
    for(j=i+1;j<taille;j++){

        if(compare(tab[i],tab[j])==0){ //compare : �changer si return un nbre <0
            temp=tab[j];
            tab[j]=tab[i];
            tab[i]=temp;
        }

    }
}

for(i=0;i<taille;i++){
    printf("%d     ",tab[i]);
}

return ;
}
//si == valeur n�gative avant la valeur positive
//compare tab[i], tab[j]
// renvoie un nbre <0 s'il faut �changer
// �changer si j<i ou si my_fab(j)==my_fab(i) mais j<i

int compare (int i, int j){

    if(my_fab(j)<my_fab(i))         //�changer si en valeur absolue j<i
        return 0;
    else if (my_fab(j)>my_fab(i))       //pas �changer si en valeur abs j>i
        return 1;
    else if (my_fab(i)==my_fab(j)){     //en valeur abs i==j
        if(j<i)                     //�changer si j<i
            return 0;
        else
            return 1;
    }
}

//////ordre d�croissant, nbre positif avant /////

void tri_inverse (int tab[], int taille){

int i,j,temp;

for(i=0;i<taille-1;i++){
    for(j=i+1;j<taille;j++){

        if(compare(tab[i],tab[j])==1){ //compare : �changer si return un nbre <0
            temp=tab[j];
            tab[j]=tab[i];
            tab[i]=temp;
        }

    }
}

for(i=0;i<taille;i++){
    printf("%d     ",tab[i]);
}

return ;
}
int my_fab(int n){

    if(n<0)
        return -n;
    else
        return n;

}

/*
 * TRI PAR ECHANGE
 *** Tableau non trié en entrée
 *** Parcourir tous les index [i,n) avec la 2ème boucle et échanger tous les éléments à chaque fois
 *** qu'ils sont inférieurs à celui pointé par la 1ère boucle
 *** Au lieu de rechercher la valeur minimale avant l'échange (tri par sélection), on échange
 *** systématiquement pour une valeur inférieur
 *** Code plus simple, mais plus d'échanges
 *** Complexité O(n^2)
 */

void tri_echange(int tab[],int n);
void tri_echange_inverse(int tab[],int n);
void echange (int *x, int *y);

 int main (void){

    int tableau[]={3,5,1,4,2};
    tri_echange(tableau,5);
    printf("\n");
    tri_echange_inverse(tableau,5);

return 0;
}

 void tri_echange(int tab[],int n){

    int i,j,temp;

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(tab[j]<tab[i]){
                temp=tab[i];
                tab[i]=tab[j];
                tab[j]=temp;
            }
        }
    }

    for(i=0;i<n;i++){

        printf("%d",tab[i]);
    }

 }

 void tri_echange_inverse(int tab[],int n){

    int i,j;

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(tab[j]>tab[i]){
                echange(&tab[i],&tab[j]);
            }
        }


    for(i=0;i<n;i++){
        printf("%d",tab[i]);
    }

 return ;

 }
 }

 void echange (int *x, int *y){

    int tmp;

    tmp=*x;
    *x=*y;
    *y=tmp;

return;
}

/*
 * TRI PAR ECHANGE
 *** Tableau non tri� en entr�e
 *** Parcourir tous les index [i,n) avec la 2�me boucle et �changer tous les �l�ments � chaque fois
 *** qu'ils sont inf�rieurs � celui point� par la 1�re boucle
 *** Au lieu de rechercher la valeur minimale avant l'�change (tri par s�lection), on �change
 *** syst�matiquement pour une valeur inf�rieur
 *** Code plus simple, mais plus d'�changes
 *** Complexit� O(n^2)
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

/*
 * Tri en valeur absolue
 */


#include <stdio.h>

void abs_sort(int tab[], int n);
int my_abs(int n);

int main(void){

    int tab[]={0,3,7,-3,5,2};

    abs_sort(tab,6);


return 0;
}


void abs_sort(int tab[], int n){

    int i,j,temp;

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(my_abs(tab[j])<my_abs(tab[i])){
                temp=tab[i];
                tab[i]=tab[j];
                tab[j]=temp;
            }
        }
     }


    for(i=0;i<n;i++){
        printf("%d   ",tab[i]);
    }
return;
}

int my_abs(int n){

    if(n>0){
        return n;
    }
    else
        return -n;
}

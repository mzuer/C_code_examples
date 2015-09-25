/*
 * tri d'un tableau de chaines
 */

//void tri (char tab[],int taille);

#include <string.h>
#include <stdio.h>


void tri (char *tab[],int taille);      //**tab

int main(void){

int i;
    char *danse[]={"Salsa","Rumba","Tango","Bachata","Merengue","Samba","Paso Doble"};

/*
for(i=0;i<7;i++)

printf("%s",danse[i]);

printf("\n");

printf("%c",danse[1][1]);
*/
    tri(danse,7);

}


void tri (char *tab[],int taille){ //ou **tab

int i,j,k;
char *temp[100];

    for(i=0;i<taille-1;i++){
        for(j=i+1;j<taille;j++){

            if(strcmp(tab[j],tab[i])<0){
                *temp=tab[j];
                tab[j]=tab[i];
                tab[i]=*temp;
            }
        }
    }
    for(i=0;i<7;i++){
    printf("%s   ",tab[i]);
    }
return ;
}


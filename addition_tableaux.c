/*
 * Addition de 2 tableaux dans un 3ème
 */

 #include <stdio.h>

void ajoute_tab (int tab1[],int tab2[],int res[],int n) {

    int i;

    for(i=0;i<n;i++){

        res[i]=tab1[i]+tab2[i];
    }
 return ;
    }

void ajoute (int tab1[],int tab2[],int n) {

    int i;
    int res[n];

    for(i=0;i<n;i++){

        res[i]=tab1[i]+tab2[i];
    }

    for(i=0;i<5;i++){

        printf("t[%d]=%d\n",i,res[i]);
    }
 return ;
    }


int main (void){

    int t1[5]={1,2,3,4,5};
    int t2[5]={1,2,3,4,5};
    int t3[5],i;


    ajoute_tab(t1,t2,t3,5);
    printf("\n");
    ajoute(t1,t2,5);

    for(i=0;i<5;i++){

        printf("t[%d]=%d\n",i,t3[i]);
    }


return 0;
}


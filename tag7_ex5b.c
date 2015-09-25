#include <stdio.h>

int main(void){

int array[6],i,nbre;

for(i=0;i<6 && nbre!=99;i++){

    puts("Gerade Zahl oder 99 zum Verlassen");
    scanf("%d",&nbre);

    while(nbre%2==1 && nbre!=99){
                    printf("gerade nbre!\n");
                    scanf("%d",&nbre);
    }

    array[i]=nbre;
}

for(i=0;i<6 && nbre!=99;i++)

    printf("der Wert lautet %d\n",array[i]);

    return 0;
}

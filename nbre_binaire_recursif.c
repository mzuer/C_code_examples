/*
 * RECURSIVITE : nbre binaire
 */

 void print_binary (int n);


int main (void){

    int nbre;

    printf("Nombre entier à convertir en nombre binaire >");
    scanf("%d",&nbre);

    print_binary(nbre);


    return 0;
}

void print_binary (int n) {

    if(n==0)
        return;

    print_binary(n/2); //afficher le nombre binaire dans le bon sens

    printf("%d",n%2);
/*
    if(n%2==1) {
        printf("1");
    }

    else {
        printf("0");
    }
*/
    return ;
}

/*
 * Lecture et affichage de chaines
 */

 int main(void){

    char msg[100];
   // char msg_2[20];

    printf("\nEntrez votre message : ");
    gets(msg);
    puts(msg);                  // accepte les espaces blancs, se termine au retour � la ligne




    char prenom[10]; //Ici on ne peut pas mettre char* prenom; dans la d�claration
    char nom[10];
    char ville[20];
    char canton[20];

    printf("Entrez nom et pr�nom : ");
    scanf("%s %s",prenom, nom);                 // sans le & !!!!

    printf("Salut %s %s",prenom, nom);        // ne pas mettre prenom[0] sans le &
    printf(" - Comment %s-%s ?","vas","tu");       //  %s pour afficher n'importe quelle chaine de caract�res


    printf("\n\nEntrez ville et canton : ");
    scanf("%s %s",&ville[0], &canton[0]);          // prenom = &prenom[0]
    printf("Tu habites %s dans le canton de %s",&ville[0], &canton[0]); // ne pas mettre prenom[0]


// Autre fa�on : gets/puts

    char msg_2[100];


    printf("\nEntrez votre message : ");
    gets(msg_2);
    puts(msg_2);                  // accepte les espaces blancs, se termine au retour � la ligne




 return 0;
 }

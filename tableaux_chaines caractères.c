/*
 * Se familiariser avec les tableaux et chaines de caract�res
 */

 #include<stdio.h>

int main (void){

//2 fa�ons d'initialiser des tableaux
    float point[3]={2.0,3.0,4.0};
    float point_2[]={1.0,2.0,3.0};

    int i;

    printf("1er tableau \n");
    for(i=0;i<3;i++){
            printf("%f \t",point[i]);
        }

    printf("\n2�me tableau \n");
    for(i=0;i<3;i++){
            printf("%f \t",point_2[i]);
        }

// 2 fa�ons d'initialiser des chaines de caract�res
    char prenom[]={'M','a','r','i','e','\0'};
    char prenom_2[]="Marie";

    printf("\n%s",prenom);
    printf("\n%s",prenom_2);


// Lire et afficher dans un tableau

    int tableau_3[4];

//1�re de fa�on de lire le contenu d'un tableau

    printf("\nRentrez les 4 chiffres du tableau :\n");
     for(i=0;i<4;i++){
            scanf("%d",&tableau_3[i]);
     }
    printf("Le 1er tableau est donc \n");
        for(i=0;i<4;i++){
                printf("%d \t",tableau_3[i]);
            }


//2�me fa�on de lire le contenu d'un tableau
    int tableau_4[4];

    printf("\nRentrez les 4 chiffres du tableau :\n");
     for(i=0;i<4;i++){
            scanf("%d",tableau_4+i);
     }
    printf("Le 1er tableau est donc \n");
        for(i=0;i<4;i++){
                printf("%d \t",tableau_4[i]);
            }

//Lire un tableau de caract�res
    char caracteres[50];
    int compteur=0;
    printf("\nRentre 1 � 1 les lettres de ton pr�nom (1 pour terminer) :\n");
     for(i=0;i<50;i++){
            scanf("%c",&caracteres[i]);
            compteur++;
            if(caracteres[i]=='1')
                break;
     }

    printf("\nTon pr�nom est donc \n");
        for(i=0;i<compteur-1;i++){
                printf("%c",caracteres[i]); //Lettres � la verticale
        }

//Lire une chaine de caract�res
    char *nom ; // = char nom[50]; !!! Attention on est oblig� d'intialiser une taille pour char[x] !!!

    printf("\nEntre ton nom : ");
    scanf("%s",nom); //%s est particulier => remplit directement le tableau
    printf("\nTon nom est : %s",nom);


return 0;

}

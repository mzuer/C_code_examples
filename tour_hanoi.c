/*
 * Fonctions r�cursives : Tours de Hanoi
 */

 #include <stdio.h>

 void tour(char src,char dst,char aux,int n);

 int main (void){

    int n;
    printf("Nombre de disques : ");
    scanf("%d",&n);
    tour ('A','B','C',n);

 return 0;
 }

 void tour (char src,char dst,char aux,int n){

 //D�finition du cas simple
    if(n==1)
        printf("D�place disque 1 de %c vers %c\n",src,dst);

        //=>d�place le disque 1 de src vers dest quand n vaut 1

//Appel r�cursif
    else{
        tour(src,aux,dst,n-1);
        //=> d�placer n-1 disques de src vers aux en utilisant dst cme tour aux
        printf("D�place disque %d de %c vers %c\n",n,src,dst);
        //=> d�placer le disque n de src vers dst
        tour(aux,dst,src,n-1);
        //=> d�placer n-1 disques de aux vers dst en utilisant src cme tour aux
}


 return ;
 }

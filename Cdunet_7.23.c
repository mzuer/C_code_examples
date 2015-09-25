/*
 * 7.23 : Triangle de Pascal
 */

 #include <stdio.h>

 int main (void){

    int triangle[30][30];
    int N,i,j;

    printf("Afficher triangle de P jusqu'à N = ");
    scanf("%d",&N);


  for (i=0; i<=N; i++){
      triangle[i][i]=1;
      triangle[i][0]=1;
      for (j=1; j<i;j++){            //j=0 et j=i déjà initialisés à 1
            triangle[i][j] = triangle[i-1][j] + triangle[i-1][j-1];

      }
    }

    for(i=0;i<=N;i++){
        printf("n=%d\   ",i);
        for(j=0;j<=i;j++){
            printf("%d  ",triangle[i][j]);
        }
        printf("\n");
    }

 return 0;
 }

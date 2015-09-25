/*
 * Multiplication de matrice 3x3 * 3x2
 */


//int mult_mat(int A[][], int B[][],int C[][]);

int main (void){

int i,j;

    int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int B[3][2]={{1,4},{2,5},{3,6}};
    int C[3][2];

    mult_mat(A,B,C);

for(i=0;i<3;i++){
    for(j=0;j<2;j++){
    printf("%d   ",C[i][j]);
}
printf("\n");
}


return 1;
}

int mult_mat(int A[][2], int B[][2], int C[][2]){    //A[3][2] (il a besoin d'1 dim pour retrouver)

    int i,j,k;

for(i=0;i<3;i++){
    for(j=0;j<2;j++){
        C[i][j]=0;
        for (k=0;k<3;k++){
        C[i][j]+=A[i][k]*B[k][i];
        }

    }
}


}



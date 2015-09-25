#include <stdio.h>

void invert (double A[2][2],double B[2][2]);


int main(void){

double A[2][2]={{1,2},{3,4}};

double B[2][2];

int i,j;

puts("Matrice A :");

for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        printf("%f   ",A[i][j]);
    }
    printf("\n");
}
    printf("\n");

puts("Matrice A inversée:");
invert(A,B);

return ;
}

void invert (double A[2][2],double B[2][2]){

int i,j;

double fact=1/(A[0][0]*A[1][1]-A[0][1]*A[1][0]);
printf("\n fat : %f \n",fact);

B[1][1]=A[0][0];
B[0][0]=A[1][1];
B[1][0]=-A[1][0];
B[0][1]=-A[0][1];

for(i=0;i<2;i++){
        for(j=0;j<2;j++){
    B[i][j]*=fact;
}
}
for(i=0;i<2;i++){
        for(j=0;j<2;j++){
    printf("%f     ",B[i][j]);
}
printf("\n");
}


}

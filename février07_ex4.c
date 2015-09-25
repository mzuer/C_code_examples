/*
 * Série de MacLaurin
 */

 #include <stdio.h>

 double denominateur(int k);
 double numerateur(int n, int k);

 int main (void){

 printf("%f",numerateur(3,3));
  printf("\n%f",denominateur(3));

printf("\n%f",exp(5));

 return 0;
 }


double exp (int n){

int k=0;
double somme=0;

if (n==0)
    return 1;

while(!precision(n,k)){

    somme+=numerateur(n,k)/denominateur(k);
    k++;
}
return somme;
}

 double numerateur(int n,int k){
    double nom=1;
     while (k-->0){
        nom*=n;
     }
 return nom;

 }

 double denominateur(int k){
    double den=1;
    while(k>0){
        den*=k;
        k--;
    }
    return den;
 }

 int precision (int n, int k){
 if(numerateur(n,k)/denominateur(k)<0.001)
    return 1;

else
    return 0;

 }

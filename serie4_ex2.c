/*
 * Série 4, ex 2 : calcul du nbre d'or avec la méthode de Newton
 */

#include <stdio.h>

double ameliore(double xk); // ????
int precision(double xk);
double nombreOrX(double xk);
double nombreOr();


int main(void){

    printf("%f",nombreOr());

return 0;
}


double nombreOr(void){

    double x0=1.0;

    return nombreOrX(x0);


}


double nombreOrX (double xk){

    double x=xk;

    while (!precision(xk)){
        x=xk-((xk-1/xk-1)/(1+1/(xk*xk)));
        xk=x;
    }

return xk;
}

int precision (double xk){

    if (xk-1/xk-1<0.001)
        return 1;

    else
        return 0;

}

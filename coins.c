/*
 * determine the value of a collection of coins
 */

#include <stdio.h>

int main(void){

	int pennies, nickels;
	int dimes, quarters;
	int change;
	int dollars;
	int total_counts;

/* get the count of each kind of coin */

printf("number of quarters >");
scanf("%d", &quarters);

printf("number of dimes >");
scanf("%d", &dimes);

printf("number of nickels >");
scanf("%d",&nickels);

printf("number of pennies >");
scanf("%d", &pennies);

/*compute the total value in cents */

total_counts=25*quarters+10*dimes+5*nickels+pennies;

/*find the value in dollars and change */

dollars=total_counts/100;
change=total_counts%100;

/* display the value in dollars and change */

printf("\n your coins are worth %d dollars and %d cents\n", dollars, change);

return (0);
}




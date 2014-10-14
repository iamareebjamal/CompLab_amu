/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

#include <stdio.h>
#include <conio.h>

void main(){
	double n, i, fact=1;
	clrscr();
	printf("Enter number to calculate factorial:\n");
	scanf("%lf", &n);
	if(!(n<0)){
		if(n==0)
			printf("\n\n%.0lf!=1", n);
		else{
			printf("\n\n%.0lf!=%.0lf",n,n);

			for(i=n;i > 1;i--){

				fact = fact * i;
				printf("x%.0lf",i-1);

			}

			printf("x0!=%.0lf",fact);
		}
	} else
		printf("\n\nEnter positive integers...");

	getch();




}
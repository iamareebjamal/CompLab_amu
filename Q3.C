/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

#include <stdio.h>
#include <conio.h>

void main(){
	double n, i, a=1, b=2, next=1;
	clrscr();

	printf("Enter number of terms of Series:\n");
	scanf("%lf", &n);

	if(n<0)
		printf("\n\nEnter positive integers...");
	else{
		printf("\n\nFirst %.0lf term(s) of Series are:\n", n);
		if(n==1)
			printf("1");
		else
			printf("1\n2");
		for(i=1;i<n-1;i++){


			next=a*b;
			a=b;
			b=next;
			printf("\n%.0lf", next);
		}


	}

	getch();
}
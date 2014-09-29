/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

#include <stdio.h>
#include <conio.h>

void main(){
	long int n, i, a=0, b=1, next=1;
	clrscr();

	printf("Enter number of terms of Fibonacci Series:\n");
	scanf("%ld", &n);
	printf("\n\nFirst %ld terms of Fibonacci Series are:\n0", n);

	for(i=0;i<n-1;i++){

		printf("\n%ld", next);
		next=a+b;
		a=b;
		b=next;
	}


	getch();
}
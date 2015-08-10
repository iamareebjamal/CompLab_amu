/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

#include <stdio.h>
#include <conio.h>

void main(){

	int number, a = 0, b = 1, next = 1, counter;
	clrscr();

	printf("\t\t\t\tFibonacci Series");
	printf("\n\t\t      ====================================");
	printf("\n\nEnter the number of terms you want for fibonacci series:\n");
	scanf("%d", &number);
	if(number > 24 || number < 1){ //Value more than 24 will result in negative answer
		printf("\n\nEnter value between 1 and 24...");
		getch();
		return;
	}
	printf("\n\n\nThe first %d term(s) of fibonacci series is/are :\n\n0", number);


	for(counter = 0; counter < number-1; counter++){
	    printf("\n%d", next);
	    next = a + b;
	    a = b;
	    b = next;
	}

	getch();
}
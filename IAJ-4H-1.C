/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

#include <stdio.h>
#include <conio.h>

void main(){
	int a;

	clrscr();

	printf("Enter a number:\n");
	scanf("%d", &a);

	if (a%2==0)
		printf("\n\n%d is even", a);
	else
		printf("\n\n%d is odd", a);

	getch();




}
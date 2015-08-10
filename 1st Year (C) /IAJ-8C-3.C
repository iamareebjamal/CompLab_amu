/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

#include <stdio.h>
#include <conio.h>

void add(){
	int a, b;
	printf("Enter two numbers a & b:\n");
	scanf("%d%d", &a, &b);
	printf("\n\nSum: %d+%d=%d\n\n", a, b, a+b);
}

void main(){
	int i;
	clrscr();
	for(i=0;i<5;i++)
		add();
	getch();
}
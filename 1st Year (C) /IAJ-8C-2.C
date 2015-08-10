/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

#include <stdio.h>
#include <conio.h>

int add(int x, int y){
	return (x+y);
}

void main(){
	int a, b;
	clrscr();
	printf("Enter two numbers a and b:\n");
	scanf("%d%d", &a, &b);
	printf("\n\nSum:%d", add(a,b));
	getch();
}
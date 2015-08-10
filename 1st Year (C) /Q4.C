/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */


#include <stdio.h>
#include <conio.h>


void main(){
	int i, j, k;

	clrscr();
	printf("Enter number for creating tables:\n");
	scanf("%d", &j);

	for(i=1;i<=10;i++){

		for(k=2;k<=j;k++)
			printf("%dx%d=%d\t", k, i, i*k);

		printf("\n");
	}




	getch();
}
/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

#include <stdio.h>
#include <conio.h>

void main(){
	int a, b, c, max, min;

	clrscr();
	printf("Enter 3 numbers a, b and c:\n");
	scanf("%d%d%d", &a, &b, &c);

	if (a>b&&a>c){
		max = a;
		if(b>c)
			min = c;
		else
			min = b;

	} else if(b>a&&b>c){
		max = b;
		if(a>c)
			min = c;
		else
			min = a;
	} else if(c>a&&c>b){
		max = c;
		if(a>b)
			min = b;
		else
			min = a;
	} else{
		if(a>b){
			max = a;
			min = b;
		}
		else {
			max = b;
			min = a;
		}
	}

	printf("\n\nMaximum value=%d\tMinimum value=%d", max, min);

	getch();



}
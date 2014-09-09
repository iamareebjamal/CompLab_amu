/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

#include <stdio.h>
#include <conio.h>

void main(){

	int choice, a, b, x;
	clrscr();

	printf("Choose one option:\n1. Add two numbers\n2. Check the number is even or odd\n3. Calcuate remainder of 2 integers\n4. Execute the expression : x = ++a - --b\n5. Print your name\n\n");
	scanf("%d", &choice);

	switch(choice){
	 case 1 :
		printf("\n\nEnter two numbers\n");
		scanf("%d%d", &a, &b);
		printf("\nSum of two numbers %d and %d is %d", a,b, a + b);
		break;
	 case 2 :
		printf("\n\nEnter a number:\n");
		scanf("%d", &a);
		if(a%2==0){
			printf("\n\nNumber is even");
		} else {
			printf("\n\nNumber is odd");
		}
		break;
	 case 3 :
		printf("\n\nEnter two numbers:\n");
		scanf("%d%d", &a, &b);
		printf("\n\nRemainder of the two integers %d and %d is : %d", a, b, a%b);
		break;
	 case 4 :
		printf("\n\nEnter two number a and b:\n");
		scanf("%d%d", &a, &b);
		x = ++a - --b;
		printf("\n\nThe result of x = ++a - --b:\n=>x = %d", x);
		break;
	 case 5 :
		printf("\n\nMy name is Areeb Jamal");
	 default:
		break;


	}

	getch();

	}

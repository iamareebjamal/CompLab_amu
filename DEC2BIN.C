<<<<<<< HEAD
/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

#include <stdio.h>
#include <conio.h>

void main(){
	int dec, bin[100], rem, quo, i=1, j;

	clrscr();
	printf("\t\t\tWelcome to Decimal to Binary Converter");
	printf("\n\n\t\t\t\tBy iamareebjamal");

	printf("\n\nEnter any decimal number:\n");
	scanf("%d", &dec);

	quo = dec;

	while(quo!=0){

		bin[i++] = quo%2;
		quo /= 2;

	}

	printf("\n\nBinary value of decimal number %d is \n", dec);

	for (j=i-1;j>0;j--){

		printf("%d", bin[j]);
	}

	getch();


}
=======
/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

#include <stdio.h>
#include <conio.h>

void main(){
	int dec, bin[100], rem, quo, i=1, j;

	clrscr();
	printf("\t\t\tWelcome to Decimal to Binary Converter");
	printf("\n\n\t\t\t\tBy iamareebjamal");

	printf("\n\nEnter any decimal number:\n");
	scanf("%d", &dec);

	quo = dec;

	while(quo!=0){

		bin[i++] = quo%2;
		quo /= 2;

	}

	printf("\n\nBinary value of decimal number %d is \n", dec);

	for (j=i-1;j>0;j--){

		printf("%d", bin[j]);
	}

	getch();


}
>>>>>>> d45e5463e8feae3254d30c2be2db2f11e9c3e13a

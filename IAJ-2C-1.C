/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */
 
/*
 * Week 2
 * Class Work
 *
 * Program 1 : Make a program to enter two numbers and print their sum on the screen.
 * 
 */

#include <stdio.h>
#include <conio.h>

void main(){

	float a, b, sum; //Defining the 3 variables. Two of which will take up value from keyboard by scanf and 3rd represents the sum

	clrscr();

	printf("Enter two numbers:\n");
	scanf("%f %f", &a, &b); //Giving the values of a and b(Yes, we can add space between specifiers, contrary to what teacher said).
	sum = a + b; //Adding them up

	printf("\n\nThe sum of two numbers is %f", sum); //Showing the result

	//Adding getch() in the end allows the program to run even when there is no scanning function.
	//This means you won't have to press Alt+F5 after Ctrl+F9 to see the Output Screen.
	getch();

}




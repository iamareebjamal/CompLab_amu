/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

/*
 * Week 2
 * Home Work
 *
 * Program 3(b) : Make a program to swap 2 numbers without using a third variable.
 * 
 */

#include <stdio.h>
#include <conio.h>

void main(){
	float a, b; //Defining two variables

	clrscr();
	
	printf("Enter two numbers a and b :\n");
	scanf("%f %f", &a, &b); //Getting and storing numbers
	
	
	printf("\n\nBefore swapping, a = %f, b = %f", a, b); //Showing their values before swapping
	
	//Swapping
	  a = a + b;
	  b = a - b;
	  a = a - b;
	
	/*
	 * Example
	 *
	 * a = 5, b = 7
	 * a = a + b = 12
	 * b = a - b = 12 - 7 = 5
	 * a = a - b = 12 - 5 = 7
	 * Hence, values swapped
	 */
	
	printf("\n\nAfter swapping, a = %f, b = %f", a, b); //Showing values after swapping

	//Adding getch() in the end allows the program to run even when there is no scanning function.
	//This means you won't have to press Alt+F5 after Ctrl+F9 to see the Output Screen.
	getch();
}

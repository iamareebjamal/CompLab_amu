/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

/*
 * Week 2
 * Home Work
 *
 * Program 3(a) : Make a program to swap 2 numbers using a third variable.
 * 
 */

#include <stdio.h>
#include <conio.h>

void main(){
	float a, b, temp; //Defining 3 variables. a, b and a 3rd variable for temporarily storing value.
	clrscr();

	printf("Enter two numbers a and b:\n");
	scanf("%f %f", &a, &b); //Getting and storing the values of 2 numbers

	printf("\n\nBefore swapping: a = %0.02f, b = %0.02f", a, b); //Showing the value of 2 numbers before swapping
	
	//Swapping
	  temp= a;
	  a = b;
	  b = temp;
	
	/*
	 * Example
	 * 
	 * a = 5, b= 7
	 * temp = a = 7
	 * a = b = 5
	 * Now, a = 5, b = 5, temp = 7
	 * b = temp = 7
	 * Hence, the values are swapped
	 */
	
	
	printf("\n\nAfter swapping, a = %0.02f, b = %0.02f", a, b); //Showing the swapped values

	//Adding getch() in the end allows the program to run even when there is no scanning function.
	//This means you won't have to press Alt+F5 after Ctrl+F9 to see the Output Screen.
	getch();


}
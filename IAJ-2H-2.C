/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

/*
 * Week 2
 * Home Work
 *
 * Program 2 : Make a program to convert Celcius temperature to Farenheit.
 * 
 */

#include <stdio.h>
#include <conio.h>

void main(){

	float celc, faren; //Defining variables in float as temperature can be in decimal
	
	clrscr();

	printf("Enter celcius temperature:\n");
	scanf("%f", &celc); //Geting and storing value of Celcius Temperature
	
	// 0K = -273.15 C, that means C temperature can't go below -273.15, so we check it and show error if otherwise 
	if (celc < -273.15){

		printf("\n\nCelcius temperature can't be less than -273.15 C");

		getch();
	} else {

	faren = (9/5)*celc + 32; //Conversion to Farenheit

	printf("\n\nFarenheit temperature of entered %0.02f C is :\n\n%0.02f F", celc, faren); //Showing the Farenheit temperature of corresponding Celcius temperature till 2 decimal places
	
	
	//Adding getch() in the end allows the program to run even when there is no scanning function.
	//This means you won't have to press Alt+F5 after Ctrl+F9 to see the Output Screen.
	getch();
     }
}
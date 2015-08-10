/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

/*
 * Week 2
 * Home Work
 *
 * Program 1 : Make a program to enter marks of 5 subjects and calculate their total and percentage, then print the result.
 * 
 */

#include <stdio.h>
#include <conio.h>

void main(){

	float maths, eng, science, comp, socsc, total, perc; //Defining all required variables of 5 subjects plus total and percentage
	//However the subject marks can be in integer, we don't use int for precision in calculation of percentage
	
	clrscr();
	
	//Getting the input for 5 subjects and storing them in respective variables
	printf("Enter marks of Maths:\n");
	scanf("%f", &maths);
	printf("\n\nEnter marks of English:\n");
	scanf("%f", &eng);
	printf("\n\nEnter marks of Science:\n");
	scanf("%f", &science);
	printf("\n\nEnter marks of Social Science:\n");
	scanf("%f", &socsc);
	printf("\n\nEnter marks of Computer:\n");
	scanf("%f", &comp);

	total = maths + science + socsc + eng + comp; //Totalling them all
	
	//Now, we check if total is negative, more than 500 (maximum value) or the individual subject marks are more than 100?
	
	if (total < 0 || total > 500 || comp > 100 || maths > 100 || eng > 100 || science > 100 || socsc > 100){ // "||" Pipeline function acts like OR gate and checks if ANY of the expression is invalid
		//In that case, the result will come out to be wrong and thus, we show a error in the situation.
		printf("\n\nSubject marks can't be more than Max. Marks. Neither can be total less than 0.\n\n Re-run the program...");
		getch();

		} else {
		
	//If there is no problem, we proceed to calculating percentage
	perc = (total * 100)/500;

	printf("\n\nTotal marks : %0.02f   Max Marks : 500", total);
	printf("\nPercentage : %0.02f%%", perc); //Printing the result till 2 decimal places.

	//Adding getch() in the end allows the program to run even when there is no scanning function.
	//This means you won't have to press Alt+F5 after Ctrl+F9 to see the Output Screen.
	getch();

       }
}

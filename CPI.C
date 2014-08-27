/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-2015
 */
 
#include <stdio.h>
#include <math.h>
#include <conio.h>

char choice;
float cpi;

float getPercent(float cpit) {

	float percentaget = (20 * pow(cpit, 3) - 380 * pow(cpit, 2) + 2725 * cpit - 1690) / 84;
	return percentaget;
}

void main() {
	clrscr();
	printf("\n\n\t\t\t    Welcome to CPI Converter\n\n\t\t\t\tby iamareebjamal\n\t\t\t\tA1A-049 (2014-15)\n\nEnter CPI here:\n");

	scanf("%f", &cpi);
	
	//Show error if CPI is more than 10, or less than 0 or percentage is more than 90
	if (cpi >= 0 && cpi <= 10 && getPercent(cpi) <= 90) {
		float perc = getPercent(cpi);
		if (perc < 0) {
			printf("\n========================================\nYour percentage is: 0%%\n");
		} else {
			//Show percentage till 2 decimal places only
			printf("\n========================================\nYour percentage is: %.2f%%\n", perc); 
		}

		if (perc >= 75) {

			printf("\nGrade : A");
			printf("\nOutstanding");

		} else if (perc >= 60 && perc < 75) {

			printf("\nGrade : B");
			printf("\nVery Good");

		} else if (perc >= 45 && perc < 60) {

			printf("\nGrade : C");
			printf("\nGood");

		} else if (perc >= 35 && perc < 45) {

			printf("\nGrade : D");
			printf("\nSatisfactory");

		} else if (perc < 35) {

			printf("\nGrade : E");
			printf("\nFail");

		}

		if (cpi >= 8.5) {

			printf(
					"\nDivision : 1st Division (Honours)\n========================================\n");

		} else if (cpi >= 6.5 && cpi < 8.5) {

			printf(
					"\nDivision : 1st Division\n========================================\n");

		} else if (cpi < 6.5) {

			printf(
					"\nDivision : 2nd Division\n========================================\n");
		}

		printf("\nWould you like the program to run again? <Y/N>"); // Asking to re-run the program


		scanf("%s", &choice);
		if (choice == 'Y' || choice == 'y') {
			clrscr();
			main();
		} else if (choice == 'N' || choice == 'n') {
			return;
		} else {
			return;
		}

	} else {
		//Error message if CPI > 10 or < 0 or percentage more than 90
		printf("\nPlease enter valid value between 0 and 10...\nWould you like the program to run again? <Y/N>"); 


		scanf("%s", &choice);
		if (choice == 'Y' || choice == 'y') {
			clrscr();
			main();
		} else if (choice == 'N' || choice == 'n') {
			return;
		} else {
			return;
		}

	}
}


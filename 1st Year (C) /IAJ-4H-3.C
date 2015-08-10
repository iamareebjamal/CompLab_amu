/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

#include <stdio.h>
#include <conio.h>

void main(){
	float marks;
	char grade;

	clrscr();
	printf("Enter your marks between 0 and 100:\n");
	scanf("%f", &marks);

	if(marks>=0 && marks<=100){
		if(marks>= 75)
			grade = 'A';
		else if(marks<75 && marks>=60)
			grade = 'B';
		else if(marks<60 && marks>=45)
			grade = 'C';
		else if(marks>=35)
			grade = 'D';
		else
			grade = 'E';

		printf("\n\nYou have scored '%c' grade!", grade);

	} else {
		printf("\n\nMarks should be between 0 and 100...");

	}
	getch();
}
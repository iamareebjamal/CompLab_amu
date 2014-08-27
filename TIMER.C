/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

#include <stdio.h>
#include <conio.h>
#include <dos.h>

void main(){
	int count, limit;
	char input;

	clrscr();
	printf("Enter number of seconds to count:\n");
	scanf("%i", &limit);

	for(count = limit; count >= 0; count--){
		clrscr();
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t%i", count);
		delay(1000);
	}
	sound(500);

	for(count = 0; count < 10; count++){
		clrscr();
		delay(100);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t   TIME OVER");
		delay(100);
	}

	nosound();

	printf("\n\nRun Again? <Y/N>\n");
	scanf("%s", &input);
	if(input == 'y' || input == 'Y')
		main();
	else
		return;

}
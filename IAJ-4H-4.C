/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

void main(){
	int year;

	clrscr();
	printf("Enter any year in Christian Era(AD):\n");
	scanf("%d", &year);

	if(year%4==0)
		printf("\n\n%d AD is a leap year", year);
	else
		printf("\n\n%d AD is not a leap year", year);

	getch();



}

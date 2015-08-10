/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

#include <stdio.h>
#include <conio.h>

void main(){
	int year, flag=0;

	clrscr();
	printf("Enter any year in Christian Era(AD):\n");
	scanf("%d", &year);


	if(year<=0||year>2014){
		printf("\n\nYear not valid!");

	} else {

	if(year%4==0){
		if(year%100==0){
			if(year%400==0)
			flag=1;
			else
			flag=0;
		} else {
			flag=1;
		}

	}
	else
		flag=0;

	if(flag==1)
			printf("\n\n%d AD is a leap year", year);
	else
			printf("\n\n%d AD is not a leap year", year);

	}
	getch();





}

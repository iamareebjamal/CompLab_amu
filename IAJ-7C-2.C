/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

#include <stdio.h>
#include <conio.h>


void main(){
	char i=0, j=0, str[100], lstr[100];
	clrscr();

	printf("Enter string:\n");
	gets(str);

	while(str[i]!='\0')
	{
		if(str[i]>='a' && str[i]<='z')
			lstr[i] = str[i] - 32;  //In ASCII, capital letters are assigned numerical value first than smaller ones.
						//There is a difference of 32 characters between Capital and Small Letters. So, we subtract 32 here to change any small ASCII value to capital
		else
			lstr[j] = str[i];

		i++, j++;
	}
	lstr[j]='\0';
	printf("\n\nEntered string in upper case:\n");
	puts(lstr);
	getch();

}
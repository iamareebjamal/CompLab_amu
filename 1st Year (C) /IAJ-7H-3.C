/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */


#include <stdio.h>
#include <conio.h>

void main(){
	char i=0, flag=1,length=0, string[100];
	clrscr();

	printf("Enter string to check palindrome:\n");
	gets(string);

	//As we don't want to use string.h library, we create a loop for finding length of string
	//As soon as any character in string is null('\0' The string terminator), we stop the loop
	while(string[i]!='\0')
		length++, i++;

	for(i=0; i<=length/2; i++){                      //We run loop only for half a length because we are
		if(string[i]!=string[length-i-1]){           //comparing first character to last character moving inwards.
			flag=0;                                  //So, running whole length is pointless, as after half length,
			break;                                   //program will start recurring and waste time.
		}
	}

	if(flag)
		printf("\n\n%s is a palindrome!", string);   //If flag is 1(true), word is palindrome, otherwise 0(false) as set
	else                                             //by above loop as soon as it finds a non matching character.
		printf("\n\n%s is not a palindrome!", string);
	getch();
}
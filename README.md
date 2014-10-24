C Project Files
===========

A C Programming Language(CPL) Class project files repo for CO-191 students in AMU and complete beginners in C language

This is a repository that contains all the projects that were asked to be made by teachers in CO-191 Practical Lab, either as Home Work or Class Work

#File Name Meaning

The files in this repository follow some syntax. The following is its meaning:


IAJ-1C-2.C means:

- *IAJ* - Abbreviation of iamareebjamal
- *1C*  - 1 means Week 1 and C means Class Work
- *2*   - 1 means Program 2

So, in total *IAJ-1C-2.C* means : 
**Week 1 Program 2 (Class Work)**

Similarly, *IAJ-2H-4.C* means :
**Week 2 Program 4 (Home Work)**

Which refers to the program "Swap 2 numbers without using a 3rd variable."

*PATTERN* files are the pattern codes which were given in assignments.

*Q* files are the  codes which were given in test after mid-term examination.

The files which are not marked as the above format are miscellaneous and not part of the course and only for extra learning purposes.


#Commenting

The entire project is highly commented to make students understand how and why some piece of code is written. For example :

```C
// 0K = -273.15 C, that means C temperature can't go below -273.15, so we check it and show error if otherwise 
	if (celc < -273.15){

		printf("\n\nCelcius temperature can't be less than -273.15 C");

		getch();
	} else {

	faren = (9/5)*celc + 32; //Conversion to Farenheit
```
Here `\\ 0K = -273.15 C, that means C temperature can't go below -273.15, so we check it and show error if otherwise`, and `//Conversion to Farenheit` are comments to make students understand why we wrote that piece of code.
The compiler will obviously skip the comments and not consider it in code, and if making a program by inference of any project from here, you shouldn't too.

More example of comments:

```C
/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */
 
#include <stdio.h>
#include <conio.h>

void main(){

	float celc, faren; //Defining variables in float as temperature can be in decimal
	
	clrscr();
	
	}

```

As you can see above, `/* This is a comment */` is also a form of comment alongwith `//This is also a comment`
So, be sure to ignore those while wriring a program from here.

#Copying of a program

Feel free to learn the program and write it from here but do NOT copy the entire program as it will inevitably attract attention as it contains comments and some codes that aren't already taught and may get you in trouble. Such codes are added in order to teach more than what is being taught and to help people weak in the language. Do NOT attempt to use it as a cheat sheet.






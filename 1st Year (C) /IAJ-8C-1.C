/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

#include <stdio.h>
#include <conio.h>

/*Ancient compilers as they are, Turbo C or any other Borland Compiler
 do not link the floating point library unless we want it. The fix is to
 create a dummy function for floating point including pointers(not in course)
 whenever we want to call %f either in scanf() or printf(). We are not opting for that
 workaround since it involves pointers. We add this code below as to solve the error. */
extern _floatconvert;
#pragma extref _floatconvert

struct student{
	char name[30];
	int roll;
	float age;
};

void main(){
	int i;
	struct student s[5];
	clrscr();
	for(i=0;i<5;i++){
		printf("Enter Student%d name:\n", i+1);
		scanf("%s",&s[i].name);
		/*If we use gets() here, it reads the '\n' left by previous scanf(that is why
		it works for first time and it doesn't work for second time). As scanf is being called
		It displays the information and send a newline character '\n' in stream, and
		it gets read up by gets function. And so it doesn't actually promt you for
		input. So, the workaround is to add getch() after scanning a number, or
		flushing the stream by function or simply using scanf for reading string.
		The only limitation here will be that entering 'space' will interrupt the input
		and will give same result as it was in the case of gets */
		printf("Enter Student%d roll number:\n", i+1);
		scanf("%d", &s[i].roll);
		printf("Enter Student%d age:\n", i+1);
		scanf("%f", &s[i].age);
		printf("\n\n");
	}
	printf("\n\nRoll No.\tName (Age)\n\n");
	for(i=0;i<5;i++)
		printf("%d\t\t%s (%.2f)\n", s[i].roll, s[i].name, s[i].age);

	getch();
}
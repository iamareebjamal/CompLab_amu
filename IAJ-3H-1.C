/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */


#include <stdio.h>
#include <conio.h>

void main(){
   int a, b, c, d;

   clrscr();
   printf("Enter two numbers:\n");
   scanf("%d%d", &a, &b);
   printf("\n\nEnter a number:\n");
   scanf("%d", &c);

   d = (c==1)?(a+b):((c==3)?(a-b):((c==7)?(a*b):(a/b)));
   printf("\n\nResult: %d", d);
   getch();

}
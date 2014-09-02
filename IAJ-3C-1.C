/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

#include <stdio.h>
#include <conio.h>

void main(){
 int a, b;
 clrscr();

 printf("Enter two numbers a and b :\n");
 scanf("%d%d", &a, &b);

 (a>b)?printf("\n\nNumber a = %d is bigger", a):printf("\n\nNumber b = %d is bigger", b);
 getch();



}
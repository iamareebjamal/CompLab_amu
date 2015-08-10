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
  printf("Enter three numbers here:\n");
  scanf("%d%d%d", &a, &b, &c);

  d = (a>b)?((a>c)?a:c):((b>c)?b:c);
  printf("\n\nThe largest number is %d", d);
  getch();

}
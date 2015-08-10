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
  printf("Enter two numbers:\n");
  scanf("%d%d", &a, &b);
  b = ++a + ++b + ++a + a++;
  printf("\n\na=%d\tb=%d", a, b);
  getch();

}

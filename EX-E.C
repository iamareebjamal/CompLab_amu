/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */
 
#include <stdio.h>
#include <conio.h>

void main(){
	int i, acc=30, x;
	float temp=1, ans=1;
	clrscr();
	printf("\n\nEnter the x:\n");
	scanf("%d", &x);
	printf("\n\nEnter the accuracy (Default:30):\n(Note:Higher the accuracy, better the result.Suggested 10~50)\n");
	scanf("%d", &acc);
	printf("\n\ne^(%d)=1", x);
	for(i=1; i<=acc; i++){
		temp*=(float)x/i;
		ans+=temp;
		printf("+(%d)^%d/%d!", x, i, i);
	}
	printf("=%f\n\n", ans);
	getch();
}

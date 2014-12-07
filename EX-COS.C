/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

#include <stdio.h>
#include <conio.h>
#define pi 3.141592653589793

void main(){
	int i, acc=5;
	float x, temp=1, ans=1;
	clrscr();
	printf("\n\nEnter the angle:\n");
	scanf("%f", &x);
	printf("\n\nEnter the accuracy (Default:5):\n(Note:Higher the accuracy, better the result.)\n");
	scanf("%d", &acc);
	printf("\n\ncos(%.2f)=1", x);
	x*=pi/180;
	for(i=1; i<=2*acc; i+=2){
		temp*=(-1)*x*x/((i)*(i+1));
		ans+=temp;
		if(temp<0)
			printf("-(%f)^%d/%d!", x, i+1, i+1);
		else
			printf("+(%f)^%d/%d!", x, i+1, i+1);
	}
	printf("=%f\n\n", ans);
	getch();
}

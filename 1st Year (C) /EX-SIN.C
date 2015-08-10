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
	float x, temp, ans;
	clrscr();
	printf("Enter the angle:\n");
	scanf("%f", &x);
	printf("\n\nEnter the accuracy (Default:5):\n(Note:Higher the accuracy, better the result.)\n");
	scanf("%d", &acc);
	printf("\n\nsin(%.2f)=%f", x, x*pi/180);
	x*=pi/180;
	ans=x;
	temp=x;
	for(i=1; i<=2*acc; i+=2){
		temp*=(-1)*x*x/((i+1)*(i+2));
		ans+=temp;
		if(temp<0)
			printf("-(%f)^%d/%d!", x, i+2, i+2);
		else
			printf("+(%f)^%d/%d!", x, i+2, i+2);
	}
	printf("=%f\n\n", ans);
	getch();
}

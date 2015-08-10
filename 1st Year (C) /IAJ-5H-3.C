/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */


#include <stdio.h>
#include <conio.h>

void main(){
	long int n, i, fact=1;
	clrscr();
	printf("Enter number to calculate factorial:\n");
	scanf("%ld", &n);
	if(!n<0){
		if(n==0)
			printf("\n\n0!=1");
		else{
			printf("\n\n%ld!=%ld",n,n);

			for(i=n;i > 1;i--){

				fact = fact * i;
				printf("x%ld",i-1);

			}

			printf("=%ld",fact);
		}
	} else 
		printf("\n\nEnter positive integers...");

	getch();




}
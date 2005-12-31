/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */
 
#include <stdio.h>
#include <conio.h>

void main(){
	int array[10], n, i, flag=0;
	clrscr();

	printf("\t\t\t\tArray Search");
	for(i=0;i<10;i++){
		printf("\n\nEnter element of array[%d]\n", i);
		scanf("%d", &array[i]);
	}

	printf("\n\nEnter number to search:\n");
	scanf("%d", &n);

	for(i=0; i<10; i++){
		if(array[i]==n){
			flag=1;
			break;
		}
	}

	if(flag==1)
		printf("\n\nFound...");
	else
		printf("\n\nDoes not exist!");

	getch();
}
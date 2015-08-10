/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

#include <stdio.h>
#include <conio.h>

void main(){
	int array[20], even[20], odd[20], i, j=0, k=0;
	clrscr();

	for(i=0;i<20;i++){
		printf("Enter number of array[%d]:\n", i);
		scanf("%d", &array[i]);
	}

	for(i=0;i<20;i++){
		if(array[i]%2==0){
			even[j]=array[i];
			j++;
		} else {
			odd[k]=array[i];
			k++;
		}

	}

	printf("\n\nEven:\n");
	for(i=0;i<j;i++){
		printf("%d ", even[i]);

	}

	printf("\n\nOdd:\n");
	for(i=0;i<k;i++){
		printf("%d ", odd[i]);

	}

	getch();

}
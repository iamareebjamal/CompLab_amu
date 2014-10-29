/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

#include <stdio.h>
#include <conio.h>

void main(){
	int array[100][100], i, j, m, n, max, min;
	clrscr();

	printf("Enter number of rows (m):\n");
	scanf("%d", &m);

	printf("Enter number of columns (n):\n");
	scanf("%d", &n);

	printf("\n\nEnter array items:\n");
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("Enter element for array[%d][%d]", i, j);
			scanf("%d", &array[i][j]);
		}
	}

	printf("\n\nMatrix:\n");
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("%d\t", array[i][j]);
		}
		printf("\n");
	}

	max = array[0][0];
	min = array[0][0];
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			if(array[i][j] > max)
				max = array[i][j];

			if(array[i][j] < min)
				min = array[i][j];

		}
	}

	printf("\n\nMaximum : %d\tMinimum : %d", max, min);

	getch();
}
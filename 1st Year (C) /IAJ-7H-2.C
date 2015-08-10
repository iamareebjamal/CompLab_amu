/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

#include <stdio.h>
#include <conio.h>

void main(){
	int array[100][100], i, j, m, n, temp=0, trace=0;
	clrscr();

	printf("Enter number of rows and columns (m):\n");
	scanf("%d", &m); //Since there are only aquare matrices to be considered

	printf("\n\nEnter elements of Matrix:\n");
	for(i=0; i<m; i++){
		for(j=0; j<m; j++){
			printf("Enter element for Matrix[%d][%d]:\t", i, j);
			scanf("%d", &array[i][j]);
		}
	}

	printf("\n\nMatrix:\n");
	for(i=0; i<=m; i++){
		temp = 0;
		for(j=0; j<m; j++){
			if(i!=m){ //Last extra row is added for equal signs
				temp = temp + array[i][j];
				if(i==j)
					trace = trace + array[i][i];

				printf("%d\t", array[i][j]);
				if(j==m-1)
					printf("=\t%d", temp); //Show sum at end of row with equal sign
			} else {
				printf("=\t"); //Equal signs in last row
				if(j==m-1)
					printf("%d", trace);  //Show trace of matrix at end
			}

		}
		printf("\n");
	}


	//We need another loop for column sum for iterating through fixed column and variable row. So, we interchange the parent and children loop
	
	for(j=0; j<m; j++){
		temp=0;
		for(i=0; i<m; i++){
			temp = temp + array[i][j];

			if(i==m-1)
				printf("%d\t", temp); //Show column sum at end
		}

	}


	getch();
}
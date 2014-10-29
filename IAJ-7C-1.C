/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

#include<stdio.h>
#include<conio.h>

void main(){
	int i, j, a[3][3], b[3][3];
	clrscr();

	printf("Matrix A:\n\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Enter element of MatrixA[%d][%d]:\t", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n\nMatrixB:\n\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Enter element of MatrixB[%d][%d]:\t", i, j);
			scanf("%d", &b[i][j]);
		}
	}

	printf("\n\nMatrix A:\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}

	printf("\n\nMatrix B:\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}

	printf("\n\nAddition of two Matrices:\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d\t", a[i][j] + b[i][j]);
		}
		printf("\n");
	}
	getch();
}



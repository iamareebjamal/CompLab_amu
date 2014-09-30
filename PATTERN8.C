/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

 /*
   Output:

				A
			A	B	A
		A	B	C	B	A
	A	B	C	D	C	B	A
A 	B	C	D	E	D	C	B	A

 */



 void main(){
	int i,j;
	clrscr();
	
	for(i=1;i<=5;i++){
	
		for(j=5;j>i;j--)
			printf("\t");
			
		for(j=0;j<i;j++)
			printf("%c\t", 'A' + j);
			
		for(j=j-2;j>=0;j--)
			printf("%c\t", 'A' + j);

		printf("\n");

	}

	getch();
 }
/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

 /*
   Output:

				A
			B	A	B
		C	B	A	B	C
	D	C	B	A	B	C	D
E 	D	C	B	A	B	C	D	E

 */



 void main(){
	int i,j;
	clrscr();
	
	for(i=1;i<=5;i++){
	
		for(j=5;j>i;j--)
			printf("\t");
			
		for(j=i-1;j>=0;j--)
			printf("%c\t", 'A' + j);
			
		for(j=1;j<=i-1;j++)
			printf("%c\t", 'A' + j);

		printf("\n");

	}
	
	getch();
 }
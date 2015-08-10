/*
 * Areeb Jamal
 * A1A - 049 (First Year) COBT
 * 2014-15
 */

 /*
   Output:

				1
			2	1
		3	2	1
	4	3	2	1
5 	4	3	2	1

 */



 void main(){
	int i,j;
	clrscr();
	
	for(i=1;i<=5;i++){
	
		for(j=5;j>i;j--)
			printf("\t");
			
		for(j=i;j>0;j--)
			printf("%d\t", j);

		printf("\n");

	}

	getch();
 }